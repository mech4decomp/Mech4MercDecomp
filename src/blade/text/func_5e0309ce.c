/*
 * __local_unwind2 (104 B) - SEH unwind helper. Sets up an exception
 * registration frame (handler record at 0x5e0309ac) and walks the
 * unwind table, calling per-entry cleanup handlers.
 *
 * __cdecl, RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_5e030a62(void);
extern char g_5e0309ac;   /* SEH handler record address (reloc-masked) */

__declspec(naked) void FUN_5e0309ce(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     eax, dword ptr [esp+0x10]
        push    eax
        push    -2
        push    offset g_5e0309ac
        push    dword ptr fs:[0]
        mov     dword ptr fs:[0], esp
loop_start:
        mov     eax, dword ptr [esp+0x20]
        mov     ebx, dword ptr [eax+8]
        mov     esi, dword ptr [eax+0xc]
        cmp     esi, -1
        jz      exit
        cmp     esi, dword ptr [esp+0x24]
        jz      exit
        lea     esi, [esi+esi*2]
        mov     ecx, dword ptr [ebx+esi*4]
        mov     dword ptr [esp+8], ecx
        mov     dword ptr [eax+0xc], ecx
        cmp     dword ptr [ebx+esi*4+4], 0
        jnz     skip_call
        push    0x101
        mov     eax, dword ptr [ebx+esi*4+8]
        call    FUN_5e030a62
        call    dword ptr [ebx+esi*4+8]
skip_call:
        jmp     loop_start
exit:
        pop     dword ptr fs:[0]
        add     esp, 0xc
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
