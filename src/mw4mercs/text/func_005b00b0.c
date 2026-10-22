/*
 * FUN_005b00b0 (80 B) — __thiscall (ECX = this). Reads a sub-object pointer
 * at this+0xE0, dispatches through its vtable, and returns a bool.
 * Mirror of FUN_005b0060 with state value 0x18 and compare const 0x0076C5B0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) char __fastcall FUN_005b00b0(void *this)
{
    

extern int DAT_0076c5b0;
__asm {
push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xE0]
        cmp     dword ptr [ecx + 0x14], 0x18
        jz      L00CC
        mov     eax, dword ptr [ecx]
        push    0x0
        push    0x18
        call    dword ptr [eax + 0x4]
        xor     al, al
        pop     esi
        ret
L00CC:
        fld     dword ptr [esi + 0x5F4]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L00ED
        mov     al, byte ptr [esi + 0x609]
        test    al, al
        jz      L00ED
        xor     al, al
        pop     esi
        ret
L00ED:
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
