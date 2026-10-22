/*
 * FUN_005d8c20 (160 B) — Rail graph flag check: read a 2D grid cell's
 * flag word and test it against a mask, returning 0/1/flag value.
 * RET 0x10.
 *
 * __thiscall (ECX = this), four stack params, RET 0x10.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_005d8c20(void *this)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        shl     edx, 0x9
        add     edx, eax
        mov     eax, dword ptr [ecx + 0x3c]
        mov     ecx, dword ptr [eax + 0x8]
        xor     eax, eax
        mov     ax, word ptr [ecx + edx*2 + 0x40200]
        mov     ecx, dword ptr [esp + 0x10]
        test    cl, 0x80
        jz      L8C4A
        test    al, 0x80
        jnz     L8CBB
L8C4A:
        test    al, 0x40
        jz      L8C53
        xor     al, al
        ret     0x10
L8C53:
        test    cl, 0x2
        jz      L8C5F
        test    eax, 0x300
        jg      L8CBB
L8C5F:
        mov     edx, eax
        and     edx, ecx
        test    dl, 0x3f
        jz      L8C6D
        xor     al, al
        ret     0x10
L8C6D:
        test    cl, 0x10
        jz      L8C79
        test    eax, 0x300
        jg      L8CBB
L8C79:
        test    cl, 0x1
        jz      L8C8F
        and     eax, 0xc00
        cmp     eax, 0xc00
        jnz     L8CBB
        xor     al, al
        ret     0x10
L8C8F:
        test    cl, 0x4
        jz      L8CA5
        and     eax, 0xc00
        cmp     eax, 0x800
        jnz     L8CBB
        xor     al, al
        ret     0x10
L8CA5:
        test    cl, 0x8
        jz      L8CBB
        and     eax, 0xc00
        cmp     eax, 0x400
        jnz     L8CBB
        xor     al, al
        ret     0x10
L8CBB:
        mov     al, 0x1
        ret     0x10
    }
}
