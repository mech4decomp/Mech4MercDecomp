/*
 * FUN_004f14f0 (115 B) — Adept::Channel component/state engine helper
 * (__thiscall, RET 0x8). Reads a stream via virtual slot 0x20, copies two
 * 16-bit fields, then loops [ESP+0x1c] times calling virtual slot 0x10 on
 * the stream and FUN_004179b0 per iteration.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004179b0(void);

__declspec(naked) void FUN_004f14f0(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ebp, ecx
        push    0x4
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edi, dword ptr [esp + 0x20]
        mov     ax, word ptr [edi + 0x16]
        mov     dx, word ptr [edi + 0x14]
        mov     word ptr [esp + 0x12], ax
        mov     eax, dword ptr [esp + 0x1c]
        xor     ebx, ebx
        test    eax, eax
        mov     word ptr [esp + 0x10], dx
        jle     L1559
        add     ebp, 0x24
L152e:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x10]
        push    eax
        mov     ecx, ebp
        call    FUN_004179b0
        mov     eax, dword ptr [esp + 0x1c]
        inc     ebx
        cmp     ebx, eax
        jl      L152e
L1559:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
