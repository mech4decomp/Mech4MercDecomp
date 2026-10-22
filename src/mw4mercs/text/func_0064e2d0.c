/*
 * FUN_0064e2d0 (68 B) — __fastcall (ECX = this). Clears flag bits 0/1 of
 * *this; if the low bits indicated a live object, invokes its virtual
 * method at vtable+0x18 with an argument (3 or 1), then nulls *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_0064e2d0(void *this)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi]
        mov     eax, ecx
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_done
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_else
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_done
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax + 0x18]
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
L_else:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi], ecx
        jz      L_done
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0x18]
L_done:
        mov     dword ptr [esi], 0x0
        pop     esi
        ret
    }
}
