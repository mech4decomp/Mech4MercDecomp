/* FUN_0056b920 - ABL opcode handler: set ignore friendly fire */
#ifdef _MSC_VER
#pragma warning(disable: 4731)
#endif

#include <windows.h>

/* External functions */
extern int  __cdecl FUN_00566bf0(int param);
extern int  __cdecl FUN_00566c30(int a, int b);
extern void __cdecl FUN_0056b7b0(int param);
extern int  __cdecl FUN_005669d0(int param);
extern void __cdecl FUN_005dd1d0(int param);
extern char * __cdecl FUN_005666d0(const char *msg);
extern int  __cdecl FUN_006fabf0(void *arg);
extern void __cdecl FUN_0064db40(void);

__declspec(naked) void __cdecl FUN_0056b920(void)
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

        /* Pop second int from stack (ECX = boolean flag) */
        mov eax, dword ptr [DAT_0080592c]

        mov     ecx, [eax]
        sub     eax, 4
        cmp     ecx, 1

        mov dword ptr [DAT_0080592c], eax

        setz    al
        push    esi
        mov     [ebp - 4], al

        call    FUN_00566bf0
        add     esp, 4
        cmp     al, 1
        jnz     not_handle

        mov     ecx, [ebp - 4]
        push    ecx
        push    esi
        call    FUN_00566c30
        add     esp, 4
        push    eax
        call    FUN_0056b7b0
        add     esp, 8
        jmp     epilogue

not_handle:
        push    esi
        call    FUN_005669d0
        add     esp, 4
        test    eax, eax
        jz      assert_fail

        mov     edx, [ebp - 4]
        push    edx
        mov     ecx, eax
        call    FUN_005dd1d0
        jmp     epilogue

assert_fail:
        mov al, byte ptr [DAT_007dde2c]

        test    al, al
        jz      epilogue

        push    0x77ffc8
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      epilogue
        int     3

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
