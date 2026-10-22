/*
 * FUN_0068f020 (230 B) — __thiscall constructor: reads a HUD element
 * definition from a stream object (virtual read at vtable+0x20), fills
 * the object's fields, and reads 9 pairs of dwords at +0x18 and +0x60,
 * plus three dwords at +0xa8/+0xac/+0xa4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068f020(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     edi, ecx
        push    0x4
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     ecx, dword ptr [esp + 0x10]
        cmp     ecx, -0x1
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edi + 0xc], ecx
        mov     dword ptr [edi + 0x10], edx
        jz      done
        cmp     edx, -0x1
        jz      done
        mov     eax, dword ptr [esp + 0x14]
        mov     eax, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [eax + ecx*0x4]
        mov     edx, dword ptr [eax + edx*0x4]
        push    ebx
        push    ebp
        mov     dword ptr [edi + 0x4], ecx
        mov     dword ptr [edi + 0x8], edx
        lea     ebx, [edi + 0x18]
        mov     ebp, 0x9
loop1:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebx + -0x4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        add     ebx, 0x8
        dec     ebp
        jnz     loop1
        lea     ebx, [edi + 0x60]
        mov     ebp, 0x9
loop2:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebx + -0x4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        add     ebx, 0x8
        dec     ebp
        jnz     loop2
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [edi + 0xa8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0xac]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [edi + 0xa4]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        pop     ebp
        pop     ebx
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ecx
        ret     0x8
done:
        mov     eax, edi
        pop     edi
        pop     esi
        pop     ecx
        ret     0x8
    }
}
