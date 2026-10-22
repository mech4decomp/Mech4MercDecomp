/* FUN_0056b5a0 - ABL opcode handler: set AI attack throttle */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_00566c30(int a, float b);
extern void __cdecl FUN_0056b430(int param);
extern int  __cdecl FUN_00566b60(int param);
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void __cdecl FUN_0056b5a0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx

        /* Read first signed byte from stream + advance by 2 */
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    esi
        inc     eax
        push    edi

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

        /* Pop second int from stack (EDI = throttle value) */
        mov eax, dword ptr [DAT_0080592c]

        mov     edi, [eax]
        sub     eax, 4

        mov dword ptr [DAT_0080592c], eax

        /* Check debug assertions on throttle value */
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        mov     [ebp - 4], edi
        jz      check_type

        cmp     edi, 100
        jle     check_neg

        push    0x77ff28
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      check_neg
        int     3

check_neg:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      check_type
        test    edi, edi
        jge     check_type

        push    0x77ff00
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

        /* Handle: convert int to float, call FUN_00566c30 then FUN_0056b430 */
        fild    dword ptr [ebp - 4]

        push    ecx

        fstp    dword ptr [esp]

        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_0056b430
        add     esp, 8
        jmp     epilogue

not_handle:
        push    esi
        call    FUN_00566b60
        add     esp, 4
        test    eax, eax
        jz      epilogue

        fild    dword ptr [ebp - 4]

        fstp    dword ptr [eax + 0x520]

epilogue:
        /* Read final byte from stream */
        mov eax, dword ptr [DAT_00805918]

        movsx   ecx, byte ptr [eax]
        inc     eax
        pop     edi

        mov dword ptr [DAT_00805918], eax

        mov dword ptr [DAT_00805908], ecx

        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
