/*
 * FUN_005da500 (67 B) — __thiscall vector constructor for 12-byte elements.
 *
 * this (ECX) = {begin, end, capacity} int* vector of 3-dword elements.
 * Params: param_1 (esp+0xc, count), param_2 (esp+0x8, src byte flag).
 * RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __stdcall FUN_004084d0(unsigned int size);

__declspec(naked) void * __stdcall FUN_005da500(void *param_1, void *param_2)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xC]
        mov     dl, byte ptr [ecx]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0xC]
        cmp     edi, eax
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], dl
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      L52E
        lea     eax, [edi + edi*2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
L52E:
        lea     ecx, [edi + edi*2]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        pop     edi
        mov     dword ptr [esi + 0x8], edx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
