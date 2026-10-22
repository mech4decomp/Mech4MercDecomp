/*
 * FUN_00628e20 (73 B) — String copy into member buffer.
 *
 * __thiscall (ECX = this, RET 4). Copies the NUL-terminated string
 * param into this+0x170 (length via repne scasb), then if this+0x14c
 * is non-null calls FUN_00560420(buffer, 0, 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00560420(int param1, int param2, int param3);

__declspec(naked) void __fastcall FUN_00628e20(void *param_1)
{
    __asm {
        mov     edx, ecx
        or      ecx, 0xffffffff
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        lea     ebx, [edx + 0x170]
        mov     esi, edi
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [edx + 0x14c]
        test    edx, edx
        jz      l_done
        mov     ecx, dword ptr [edx + 0x70]
        push    0x0
        push    0x0
        push    ebx
        call    FUN_00560420
    l_done:
        pop     edi
        pop     esi
        pop     ebx
        ret     0x4
    }
}
