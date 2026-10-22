/*
 * FUN_0069aff0 (172 B) — Game-state polling loop.
 *
 * While global state (0x008058ac) == 1, runs a sequence of setup
 * calls (FUN_0064fcd0, FUN_00649150, FUN_0069ae70, FUN_0069b0f0,
 * FUN_00649920), then depending on state either calls FUN_00649150
 * or checks two string flags via FUN_006498f0 and calls FUN_00562f40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058ac;
extern int g_80d988;

extern void __cdecl FUN_0064fcd0(void *p);
extern void __cdecl FUN_00649150(void);
extern void __cdecl FUN_0069ae70(int a, int b);
extern void __cdecl FUN_0069b0f0(int p);
extern void __cdecl FUN_00649920(void *a, void *b, void *c);
extern char __cdecl FUN_006498f0(void *p);
extern void __cdecl FUN_00562f40(int p);

__declspec(naked) void __fastcall FUN_0069aff0(int param_1)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_8058ac]
        push    edi
        mov     edi, 1
        cmp     eax, edi
        jnz     l_done
    l_loop:
        lea     eax, [esp + 4]
        push    eax
        call    FUN_0064fcd0
        mov     ecx, dword ptr [esp + 8]
        mov     eax, dword ptr [g_80d988]
        mov     dword ptr [ecx + 0x18], edi
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edx + 0x40], eax
        call    FUN_00649150
        push    0x13
        push    0xa
        call    FUN_0069ae70
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        call    FUN_0069b0f0
        push    0x7b5890
        push    0x7b58e0
        push    0x7b5f80
        call    FUN_00649920
        mov     eax, dword ptr [g_8058ac]
        add     esp, 0x1c
        cmp     eax, 0xe
        jnz     l_else
        call    FUN_00649150
        jmp     l_check
    l_else:
        push    0x7b58e0
        call    FUN_006498f0
        add     esp, 4
        test    al, al
        jnz     l_call
        push    0x7b5890
        call    FUN_006498f0
        add     esp, 4
        test    al, al
        jz      l_check
    l_call:
        push    0x14
        call    FUN_00562f40
        add     esp, 4
    l_check:
        cmp     dword ptr [g_8058ac], edi
        jz      l_loop
    l_done:
        pop     edi
        pop     ecx
        ret
    }
}
