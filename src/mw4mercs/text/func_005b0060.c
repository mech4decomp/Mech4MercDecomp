/*
 * FUN_005b0060 (80 B) — __thiscall (ECX = this). Reads a sub-object pointer
 * at this+0xE0, dispatches through its vtable, and returns a bool.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_005b0060(void *this)
{
    

extern int DAT_00785d40;
__asm {
push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xE0]
        cmp     dword ptr [ecx + 0x14], 0x17
        jz      L007C
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x17
        call    dword ptr [eax + 0x4]
        xor     al, al
        pop     esi
        ret
L007C:
        fld     dword ptr [esi + 0x5F4]
        fcomp dword ptr [DAT_00785d40]
        fnstsw  ax
        test    ah, 0x40
        jnz     L009D
        mov     al, byte ptr [esi + 0x609]
        test    al, al
        jz      L009D
        xor     al, al
        pop     esi
        ret
L009D:
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x13
        call    dword ptr [edx + 0x4]
        mov     al, 0x1
        mov     byte ptr [esi + 0x514], al
        pop     esi
        ret
    }


}
