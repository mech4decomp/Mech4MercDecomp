/*
 * FUN_004d7cd0 (151 B) — __thiscall network receive pump. Uses select() on the
 * socket at +0x17d8; when readable, recvfrom() into the global buffer
 * 0x7dc364, null-terminates it, and dispatches to FUN_004d8740. Loops until
 * select returns 0/-1 or the socket is invalid.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075dfce(void);   /* select */
extern void __cdecl FUN_0075dfc8(void);   /* recvfrom */
extern void __cdecl FUN_004d8740(void);

__declspec(naked) void FUN_004d7cd0(void)
{
    __asm {
        sub     esp, 0x120
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+0x17d8]
        xor     ebx, ebx
        cmp     eax, -1
        mov     dword ptr [esp+8], 0x10
        mov     dword ptr [esp+0xc], ebx
        mov     dword ptr [esp+0x10], ebx
        jz      exit
        mov     dword ptr [esp+0x28], eax
        mov     dword ptr [esp+0x24], 1
loop_top:
        lea     eax, [esp+0xc]
        push    eax
        push    ebx
        push    ebx
        lea     ecx, [esp+0x30]
        push    ecx
        push    0x40
        call    FUN_0075dfce
        cmp     eax, -1
        jz      exit
        cmp     eax, ebx
        jz      exit
        mov     ecx, dword ptr [esi+0x17d8]
        lea     edx, [esp+8]
        push    edx
        lea     eax, [esp+0x18]
        push    eax
        push    ebx
        push    0xff
        push    0x7dc364
        push    ecx
        call    FUN_0075dfc8
        cmp     eax, -1
        jz      loop_top
        lea     edx, [esp+0x14]
        push    edx
        push    0x7dc364
        mov     ecx, esi
        mov     byte ptr [eax+0x7dc364], bl
        call    FUN_004d8740
        jmp     loop_top
exit:
        pop     esi
        pop     ebx
        add     esp, 0x120
        ret
    }
}
