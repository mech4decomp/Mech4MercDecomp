/*
 * FUN_00676a20 (242 B) — HUD map/hud4 family __thiscall spatial lookup.
 * Searches a doubly-linked list (head this->[0x4], next +0x2c) then a
 * spatial hash (this->[0], [0x8], [0xc], [0x10]) for a node whose AABB
 * (floats at +0x0..+0xc) overlaps param_1's AABB and whose +0x34 tag
 * differs. Returns the matching node or 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void* FUN_00676a20(void* param_1)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x4]
        test    edx, edx
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        push    edi
        jz      L6A73
L6A31:
        mov     edi, dword ptr [esi + 0x34]
        cmp     edi, dword ptr [edx + 0x34]
        jz      L6A6C
        fld     dword ptr [esi + 0x4]
        fcomp   dword ptr [edx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L6A6C
        fld     dword ptr [esi]
        fcomp   dword ptr [edx + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L6A6C
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [edx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L6A6C
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [edx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6AFA
L6A6C:
        mov     edx, dword ptr [edx + 0x2c]
        test    edx, edx
        __emit 0x75   /* __emit: backward jnz L6A31; MSVC6 miscomputes rel (0xBB vs ref 0xBE) */
        __emit 0xBE
L6A73:
        mov     eax, dword ptr [esi + 0x10]
        mov     edi, dword ptr [ecx + 0xc]
        cmp     eax, edi
        jl      L6B0A
        mov     edx, dword ptr [ecx + 0x10]
        lea     ebx, [edx + edi]
        cmp     eax, ebx
        jge     L6B0A
        sub     eax, edi
        mov     ebx, eax
        cmp     ebx, edx
        jge     L6B0A
        mov     eax, dword ptr [ecx + 0x8]
        lea     edi, [eax + ebx]
        cmp     edi, edx
        jl      L6AA3
        sub     eax, edx
        add     eax, ebx
        mov     edi, eax
L6AA3:
        cmp     edi, -0x1
        jz      L6B0A
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + edi*4]
        test    ecx, ecx
        jz      L6B0A
L6AB4:
        mov     edx, dword ptr [esi + 0x34]
        cmp     edx, dword ptr [ecx + 0x34]
        jz      L6AEB
        fld     dword ptr [esi + 0x4]
        fcomp   dword ptr [ecx]
        fnstsw  ax
        test    ah, 0x1
        jnz     L6AEB
        fld     dword ptr [esi]
        fcomp   dword ptr [ecx + 0x4]
        fnstsw  ax
        test    ah, 0x41
        jz      L6AEB
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [ecx + 0x8]
        fnstsw  ax
        test    ah, 0x1
        jnz     L6AEB
        fld     dword ptr [esi + 0x8]
        fcomp   dword ptr [ecx + 0xc]
        fnstsw  ax
        test    ah, 0x41
        jnz     L6B02
L6AEB:
        mov     ecx, dword ptr [ecx + 0x2c]
        test    ecx, ecx
        __emit 0x75   /* __emit: backward jnz L6AB4; MSVC6 miscomputes rel (0xBF vs ref 0xC2) */
        __emit 0xC2
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x4
L6AFA:
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        ret     0x4
L6B02:
        pop     edi
        pop     esi
        mov     eax, ecx
        pop     ebx
        ret     0x4
L6B0A:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x4
    }
}
