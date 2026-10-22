/*
 * FUN_0065a5d0 (145 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Copies an array of 12-byte elements from the source (param) into a
 * freshly allocated buffer, storing begin/end pointers in this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(unsigned int);

__declspec(naked) void __stdcall FUN_0065a5d0(void *param)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [eax]
        push    ebp
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax + 0x8]
        push    edi
        mov     edi, dword ptr [eax + 0x4]
        mov     byte ptr [esp + 0x14], cl
        mov     ecx, edi
        sub     ecx, ebx
        mov     eax, 0x2aaaaaab
        imul    ecx
        mov     cl, byte ptr [esp + 0x14]
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     eax, 0
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], cl
        mov     ebp, edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      L_a622
        lea     edx, [ebp + ebp*2]
        shl     edx, 2
        push    edx
        call    FUN_004084d0
        add     esp, 4
    L_a622:
        lea     ecx, [ebp + ebp*2]
        lea     edx, [eax + ecx*4]
        mov     ecx, ebx
        cmp     ecx, edi
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], edx
        jz      L_a655
    L_a637:
        test    eax, eax
        jz      L_a64b
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax + 0x4], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x8], edx
    L_a64b:
        add     ecx, 0xc
        add     eax, 0xc
        cmp     ecx, edi
        jnz     L_a637
    L_a655:
        pop     edi
        mov     dword ptr [esi + 0x4], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
