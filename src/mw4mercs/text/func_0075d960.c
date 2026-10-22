/*
 * FUN_0075d960 (44 B) — __thiscall (ECX = this), RET 4.
 *
 * Fills a buffer with a value: dest = this[4], count = this[1]*this[0],
 * value = param. Uses rep stosd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_0075d960(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 8
        mov     edx, dword ptr [ecx + 4]
        imul    edx, dword ptr [ecx]
        mov     eax, dword ptr [ecx + 0x10]
        push    edi
        mov     dword ptr [ebp - 8], eax
        mov     dword ptr [ebp - 4], edx
        push    edi
        push    ecx
        mov     edi, dword ptr [ebp - 8]
        mov     ecx, dword ptr [ebp - 4]
        mov     eax, dword ptr [ebp + 8]
        rep stosd
        pop     ecx
        pop     edi
        pop     edi
        mov     esp, ebp
        pop     ebp
        ret     4
    }
}
