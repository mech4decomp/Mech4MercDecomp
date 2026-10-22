/*
 * FUN_006C8F00 (45 B) — __thiscall (ECX = this, RET 4) buffer fill.
 *
 * Fills a buffer with a value: dest = this->m14, count = this->m8 *
 * this->m4, value = param. Uses REP STOSD.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_006c8f00(void *this, int param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        mov     edx, dword ptr [ecx + 8]
        imul    edx, dword ptr [ecx + 4]
        mov     eax, dword ptr [ecx + 0x14]
        push    edi
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], edx
        push    edi
        push    ecx
        mov     edi, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp + 8]
        rep     stosd
        pop     ecx
        pop     edi
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
