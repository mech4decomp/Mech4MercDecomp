/*
 * FUN_0068FBB0 (58 B) — __thiscall (RET 0). Iterates over a range
 * [this+8, this+0xc) in 8-byte steps, calling the function pointer at
 * g_76b420 with (buffer, 0x798fbc, [esi], [esi+4]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_76b420;

__declspec(naked) void FUN_0068FBB0(void)
{
    __asm {
        sub     esp, 0x64
        push    esi
        mov     esi, dword ptr [ecx + 8]
        push    edi
        mov     edi, dword ptr [ecx + 0xc]
        cmp     esi, edi
        je      L_68fbe4
        push    ebx
        mov     ebx, dword ptr [g_76b420]
L_68fbc6:
        mov     eax, dword ptr [esi + 4]
        mov     ecx, dword ptr [esi]
        push    eax
        push    ecx
        lea     edx, [esp + 0x14]
        push    0x798fbc
        push    edx
        call    ebx
        add     esi, 8
        add     esp, 0x10
        cmp     esi, edi
        jne     L_68fbc6
        pop     ebx
L_68fbe4:
        pop     edi
        pop     esi
        add     esp, 0x64
        ret
    }
}
