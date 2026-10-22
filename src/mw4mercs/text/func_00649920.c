/*
 * FUN_00649920 (151 B) — __cdecl (3 params, plain RET).
 *
 * Polls three handles via FUN_006498f0; if all clear, calls
 * FUN_00562f40 with a size derived from global 0x8058ac, then
 * loops calling FUN_00649150 and re-polling until a handle is
 * set or the global reaches 0x18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;
extern char __cdecl FUN_006498f0(int a);
extern void __cdecl FUN_00562f40(int a);
extern void __cdecl FUN_00649150(void);

__declspec(naked) void __cdecl FUN_00649920(int param_1, int param_2, int param_3)
{
    __asm {
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        push    esi
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_6499b3
        mov     ebp, dword ptr [esp + 0x14]
        push    ebp
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_6499b3
        mov     edi, dword ptr [esp + 0x18]
        push    edi
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_6499b3
        mov     edx, dword ptr [g_8058ac]
        xor     eax, eax
        cmp     edx, 0x18
        setnz   al
        dec     eax
        and     eax, 0xfffffff5
        add     eax, 0xf
        push    eax
        call    FUN_00562f40
        push    esi
        call    FUN_006498f0
        add     esp, 0x8
        test    al, al
        jnz     L_6499b3
    L_64997e:
        push    ebp
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_6499b3
        push    edi
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jnz     L_6499b3
        cmp     dword ptr [g_8058ac], 0x18
        jz      L_6499b3
        call    FUN_00649150
        push    esi
        call    FUN_006498f0
        add     esp, 0x4
        test    al, al
        jz      L_64997e
    L_6499b3:
        pop     edi
        pop     esi
        pop     ebp
        ret
    }
}
