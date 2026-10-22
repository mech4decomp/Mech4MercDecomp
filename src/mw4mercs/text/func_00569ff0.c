/* FUN_00569ff0 - ABL opcode handler: distance/sqrt computation */
#ifdef _MSC_VER
#pragma warning(disable: 4731)  /* frame pointer register 'ebp' modified by inline assembly code */
#endif

#include <windows.h>

/* ABL runtime globals (absolute addresses) */
#define ADDR_DAT_00805918  0x00805918
#define ADDR_DAT_00805908  0x00805908
#define ADDR_DAT_0080592c  0x0080592c
#define ADDR_DAT_00805928  0x00805928
#define ADDR_DAT_0080d9bc  0x0080d9bc

/* External ABL functions */
extern int __cdecl FUN_0064d3d0(int param1, int param2);
extern void __cdecl FUN_00563060(int param1);

/* _ftol is MSVC CRT intrinsic for float-to-long conversion */
long _ftol(void);

__declspec(naked) void FUN_00569ff0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_00805928;
extern int DAT_0080d9bc;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 8

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi

        mov dword ptr [DAT_00805908], ecx

        mov     ecx, dword ptr [eax]
        add     eax, 4
        push    2
        push    ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064d3d0

        mov eax, dword ptr [DAT_0080592c]

        mov     esi, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        mov     ecx, dword ptr [eax + 1]
        inc     eax
        add     eax, 4
        push    2
        push    ecx

        mov dword ptr [DAT_00805908], edx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064d3d0

        mov eax, dword ptr [DAT_0080592c]

        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [edx]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        /* Compute distance squared: (x1-x2)^2 + (y1-y2)^2 */
        mov     eax, dword ptr [esi]
        sub     eax, ecx
        mov     ecx, dword ptr [esi + 8]
        sub     ecx, dword ptr [edx + 8]
        mov     edx, ecx
        imul    edx, ecx
        mov     ecx, eax
        imul    ecx, eax
        add     edx, ecx
        mov     dword ptr [ebp - 4], edx

        add     esp, 16

        /* Convert to float, then do sqrt approximation */
        fild    dword ptr [ebp - 4]
        fstp    dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp - 4]
        sar     eax, 1
        add     eax, 0x1fc00000
        mov     dword ptr [ebp - 8], eax

        /* Check stack bounds */
        mov esi, dword ptr [DAT_0080592c]

        mov edx, dword ptr [DAT_00805928]

        add     esi, 4
        add     edx, 0xa000
        cmp     esi, edx

        mov dword ptr [DAT_0080592c], esi

        jc      no_overflow
        push    0
        call    FUN_00563060
        add     esp, 4
no_overflow:

        /* _ftol(sqrt_approx) and store on stack */
        fld     dword ptr [ebp - 8]
        call    _ftol
        mov     dword ptr [esi], eax

        /* Read final byte opcode */
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax

        mov dword ptr [DAT_00805918], eax

        mov eax, dword ptr [DAT_0080d9bc]

        mov dword ptr [DAT_00805908], ecx

        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
