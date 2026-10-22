/* FUN_005765b0 - ABL opcode handler: group size query */
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
#define ADDR_DAT_007dde2c  0x007dde2c

/* External ABL functions */
extern void __cdecl FUN_0064db40(void);
extern char __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_005666d0(const char *str);
extern int  __cdecl FUN_006fabf0(int param);
extern int  __cdecl FUN_00566c30(int param, void *buf, int flag);
extern char __cdecl FUN_00566c10(int param);
extern void __cdecl FUN_00580580(void *a, void *b);
extern void __cdecl FUN_00566ef0(int param);
extern void __cdecl FUN_00580630(void *ptr, int count);
extern int  __cdecl FUN_0063af40(int param);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) void FUN_005765b0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_00805928;
extern int DAT_0080d9bc;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x14

        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    esi
        inc     eax
        push    edi

        mov dword ptr [DAT_00805908], ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        mov eax, dword ptr [DAT_0080592c]

        mov     esi, dword ptr [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      skip_assert

        push    esi
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jz      skip_assert

        push    0x78114c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      skip_assert
        int     3

skip_assert:
        push    esi
        call    FUN_00566c30
        push    esi
        mov     edi, eax
        call    FUN_00566c10
        add     esp, 8
        cmp     al, 1
        jnz     case_not_one

        lea     edx, [ebp - 8]
        push    edx
        lea     eax, [ebp - 1]
        push    eax
        lea     ecx, [ebp - 0xc]
        mov     dword ptr [ebp - 0x14], 0
        mov     dword ptr [ebp - 0x10], 0
        mov     dword ptr [ebp - 8], 0
        call    FUN_00580580

        push    0
        lea     ecx, [ebp - 0x14]
        push    ecx
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_00566ef0

        mov     edi, dword ptr [ebp - 0x14]
        mov     esi, dword ptr [ebp - 0x10]

        mov edx, dword ptr [DAT_00805928]

        sub     esi, edi

        mov edi, dword ptr [DAT_0080592c]

        add     edi, 4
        add     edx, 0xa000
        add     esp, 0xc
        sar     esi, 2
        cmp     edi, edx

        mov dword ptr [DAT_0080592c], edi

        jc      alloc_ok1
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok1:
        mov     dword ptr [edi], esi

        mov     eax, dword ptr [ebp - 0x14]
        mov     ecx, dword ptr [ebp - 0xc]

        mov esi, dword ptr [DAT_0080d9bc]

        sub     ecx, eax
        sar     ecx, 2
        push    ecx
        push    eax
        call    FUN_00580630

        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        add     esp, 8
        inc     eax

        mov dword ptr [DAT_00805918], eax

        pop     edi
        mov     eax, esi

        mov dword ptr [DAT_00805908], edx

        pop     esi
        mov     esp, ebp
        pop     ebp
        ret

case_not_one:
        push    edi
        call    FUN_0063af40

        mov esi, dword ptr [DAT_0080592c]

        mov     edi, eax

        mov eax, dword ptr [DAT_00805928]

        add     esi, 4
        add     eax, 0xa000
        add     esp, 4
        cmp     esi, eax

        mov dword ptr [DAT_0080592c], esi

        jc      alloc_ok2
        push    0
        call    FUN_00563060
        add     esp, 4

alloc_ok2:
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        mov     dword ptr [esi], edi
        inc     eax
        pop     edi

        mov dword ptr [DAT_00805918], eax

        mov eax, dword ptr [DAT_0080d9bc]

        mov dword ptr [DAT_00805908], ecx

        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
