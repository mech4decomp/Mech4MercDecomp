/*
 * FUN_00756940 (135 B) — __thiscall (ECX = this), no stack args, RET.
 *
 * Enters a critical section (0x858ac8), checks this->[0x9c] == 5 and
 * calls FUN_00749600; otherwise checks this->[0] and calls
 * FUN_00757cb0. Returns a bool based on the checks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00749600(void *a);
extern void __stdcall FUN_00757cb0(void *a, void *b);

extern unsigned char g_858ac8;
extern void (__stdcall *g_76b110)(void *);
extern void (__stdcall *g_76b100)(void *);

__declspec(naked) void FUN_00756940(void)
{
    __asm {
        push    ecx
        push    esi
        push    offset g_858ac8
        mov     esi, ecx
        call    dword ptr [g_76b110]
        cmp     dword ptr [esi + 0x9c], 0x5
        jnz     L1
        mov     eax, dword ptr [esi + 0x70]
        mov     ecx, dword ptr [eax + 0xec]
        push    ecx
        call    FUN_00749600
        cmp     eax, 0x4
        push    offset g_858ac8
        jnz     L2
        call    dword ptr [g_76b100]
        xor     al, al
        pop     esi
        pop     ecx
        ret
L1:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jnz     L3
        push    offset g_858ac8
        call    dword ptr [g_76b100]
        xor     al, al
        pop     esi
        pop     ecx
        ret
L3:
        lea     edx, [esp + 0x4]
        push    edx
        push    eax
        call    FUN_00757cb0
        mov     al, byte ptr [esi + 0x98]
        test    al, al
        push    offset g_858ac8
        jz      L4
L2:
        call    dword ptr [g_76b100]
        mov     al, 0x1
        pop     esi
        pop     ecx
        ret
L4:
        call    dword ptr [g_76b100]
        mov     eax, dword ptr [esp + 0x4]
        and     eax, 0x1
        pop     esi
        pop     ecx
        ret
    }
}
