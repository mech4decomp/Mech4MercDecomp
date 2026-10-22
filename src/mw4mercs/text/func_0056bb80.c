/* FUN_0056bb80 - ABL opcode handler: set AI firing delay (min/max) */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_00566c30(int a, float b, float c);
extern void __cdecl FUN_0056ba00(int param);
extern int  __cdecl FUN_00566b60(int param);
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void __cdecl FUN_0056bb80(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_0076c5b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 8

        /* Read first signed byte from stream + advance by 2 */
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi

        mov dword ptr [DAT_00805908], ecx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop first int from stack (ESI = object id) */
        mov eax, dword ptr [DAT_0080592c]

        mov     esi, [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        /* Read next byte from stream */
        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        inc     eax

        mov dword ptr [DAT_00805908], edx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop second int from stack (ECX = min delay, stored at [ebp-4]) */
        mov eax, dword ptr [DAT_0080592c]

        mov     ecx, [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        /* Read next byte from stream */
        mov eax, dword ptr [DAT_00805918]

        movsx   edx, byte ptr [eax]
        inc     eax
        mov     [ebp - 4], ecx

        mov dword ptr [DAT_00805908], edx

        mov dword ptr [DAT_00805918], eax

        call    FUN_0064db40

        /* Pop third int from stack (ECX = max delay, stored at [ebp-8]) */
        mov eax, dword ptr [DAT_0080592c]

        mov     ecx, [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        /* Check debug assertions on delay values */
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        mov     [ebp - 8], ecx
        jz      check_type

        /* Check min delay >= 0 */
        fld     dword ptr [ebp - 4]

        fcomp dword ptr [DAT_0076c5b0]

        fnstsw ax

        test    ah, 1
        jz      check_max

        push    0x780080
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_max
        int     3

check_max:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_type

        /* Check max delay >= 0 */
        fld     dword ptr [ebp - 8]

        fcomp dword ptr [DAT_0076c5b0]

        fnstsw ax

        test    ah, 1
        jz      check_order

        push    0x780050
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_order
        int     3

check_order:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_type

        /* Check min <= max */
        fld     dword ptr [ebp - 4]

        fcomp   dword ptr [ebp - 8]

        fnstsw ax

        test    ah, 0x41
        jnz     check_type

        push    0x780008
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_type
        int     3

check_type:
        push    esi
        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jnz     not_handle

        mov     edx, [ebp - 8]
        mov     eax, [ebp - 4]
        push    edx
        push    eax
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_0056ba00
        add     esp, 0xc
        jmp     epilogue

not_handle:
        push    esi
        call    FUN_00566b60
        add     esp, 4
        test    eax, eax
        jz      epilogue

        mov     ecx, [ebp - 4]
        mov     edx, [ebp - 8]
        mov     [eax + 0x528], ecx
        mov     [eax + 0x52c], edx

epilogue:
        /* Read final byte from stream */
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax

        mov dword ptr [DAT_00805918], eax

        mov dword ptr [DAT_00805908], ecx

        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
