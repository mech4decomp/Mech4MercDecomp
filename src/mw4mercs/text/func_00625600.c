/*
 * FUN_00625600 (127 B) — Copy/allocate a vector-like structure (thiscall).
 *
 * __thiscall (ECX = this), RET 4 (one stack param). Copies header
 * fields from param_1 into this, allocates a backing buffer via
 * FUN_004084d0, copies the element array, and returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void *__stdcall FUN_00625600(void *param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     dx, word ptr [eax + 2]
        push    ebx
        mov     ebx, dword ptr [eax + 8]
        push    ebp
        mov     ebp, dword ptr [eax + 4]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        push    edi
        mov     byte ptr [esi], cl
        mov     cl, byte ptr [eax + 0xc]
        mov     word ptr [esi + 2], dx
        mov     edx, 0
        mov     edi, ebx
        sub     edi, ebp
        sar     edi, 2
        mov     dword ptr [esi + 4], edx
        mov     byte ptr [esi + 0xc], cl
        mov     dword ptr [esi + 8], edx
        mov     dword ptr [esi + 0xc], edx
        jz      l_4d
        lea     eax, [edi * 4 + 0]
        push    eax
        call    FUN_004084d0
        add     esp, 4
        xor     edx, edx
        jmp     l_4f
    l_4d:
        xor     eax, eax
    l_4f:
        lea     ecx, [eax + edi * 4]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, ebp
        cmp     ecx, ebx
        mov     dword ptr [esi + 4], eax
        mov     dword ptr [esi + 8], eax
        jz      l_73
    l_61:
        cmp     eax, edx
        jz      l_69
        mov     edi, dword ptr [ecx]
        mov     dword ptr [eax], edi
    l_69:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, ebx
        jnz     l_61
    l_73:
        pop     edi
        mov     dword ptr [esi + 8], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     4
    }
}
