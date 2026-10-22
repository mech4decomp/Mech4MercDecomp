/*
 * FUN_00625490 (147 B) — __stdcall, RET 4 (one stack param).
 *
 * Allocates a 0x20-byte object, copies a header + array of dwords from
 * the source param into it, returning the allocation pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(unsigned int);

__declspec(naked) void __stdcall FUN_00625490(void *param)
{
    __asm {
        push    ecx
        push    esi
        push    0x20
        call    FUN_004084d0
        lea     esi, [eax + 0x10]
        xor     edx, edx
        add     esp, 4
        cmp     esi, edx
        mov     dword ptr [esp + 0x4], eax
        jz      L_551e
        mov     eax, dword ptr [esp + 0xc]
        mov     cl, byte ptr [eax]
        push    ebx
        mov     ebx, dword ptr [eax + 0x8]
        mov     byte ptr [esi], cl
        mov     cx, word ptr [eax + 0x2]
        push    ebp
        mov     ebp, dword ptr [eax + 0x4]
        push    edi
        mov     word ptr [esi + 0x2], cx
        mov     cl, byte ptr [eax + 0xc]
        mov     edi, ebx
        sub     edi, ebp
        sar     edi, 2
        mov     dword ptr [esi + 0x4], edx
        mov     byte ptr [esi + 0xc], cl
        mov     dword ptr [esi + 0x8], edx
        mov     dword ptr [esi + 0xc], edx
        jz      L_54ee
        lea     edx, [edi*4 + 0]
        push    edx
        call    FUN_004084d0
        add     esp, 4
        xor     edx, edx
        jmp     L_54f0
    L_54ee:
        xor     eax, eax
    L_54f0:
        lea     ecx, [eax + edi*4]
        mov     dword ptr [esi + 0xc], ecx
        mov     ecx, ebp
        cmp     ecx, ebx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      L_5514
    L_5502:
        cmp     eax, edx
        jz      L_550a
        mov     edi, dword ptr [ecx]
        mov     dword ptr [eax], edi
    L_550a:
        add     ecx, 4
        add     eax, 4
        cmp     ecx, ebx
        jnz     L_5502
    L_5514:
        pop     edi
        pop     ebp
        mov     dword ptr [esi + 0x8], eax
        mov     eax, dword ptr [esp + 0x8]
        pop     ebx
    L_551e:
        pop     esi
        pop     ecx
        ret     4
    }
}
