/*
 * FUN_006249f0 (106 B) — __thiscall (this in ECX, RET 0x4).
 *
 * Constructs a vector-like object at [this] from a source struct
 * (ptr at +0, end at +4, byte flag at +8): allocates a copy buffer
 * via FUN_004084d0 and copies the element range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_006249f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    ebx
        mov     ebx, dword ptr [eax + 0x4]
        push    ebp
        mov     ebp, dword ptr [eax]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax + 0x8]
        push    edi
        mov     eax, 0x0
        mov     edi, ebx
        sub     edi, ebp
        sar     edi, 0x2
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], cl
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      L_2b
        lea     eax, [edi*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
    L_2b:
        lea     ecx, [eax + edi*4]
        mov     dword ptr [esi + 0x8], ecx
        mov     ecx, ebp
        cmp     ecx, ebx
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        jz      L_4e
    L_3c:
        test    eax, eax
        jz      L_44
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
    L_44:
        add     ecx, 0x4
        add     eax, 0x4
        cmp     ecx, ebx
        jnz     L_3c
    L_4e:
        pop     edi
        mov     dword ptr [esi + 0x4], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x4
    }
}
