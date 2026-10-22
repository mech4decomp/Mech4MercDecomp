// FUN_00540530 (133 bytes)
// __thiscall (ECX = this, stack param at ESP+0x08 = weapon slot index)
// Returns float in ST(0) - weapon integer damage accumulator (uses FIADD)
__declspec(naked) void func_00540530(void)
{
    

extern int DAT_0076c5b0;
__asm {
mov     al, byte ptr [ecx + 0x17]
        test    al, al
        push    esi
        jnz     check_slot
        fld dword ptr [DAT_0076c5b0]
        pop     esi
        ret     0x04

check_slot:
        mov     esi, dword ptr [esp + 0x08]
        cmp     esi, 0x08
        jnz     loop_init
        fld dword ptr [DAT_0076c5b0]
        pop     esi
        ret     0x04

loop_init:
        fld dword ptr [DAT_0076c5b0]
        push    ebx
        lea     eax, [ecx + 0x3539]
        mov     edx, 0xff

loop1:
        mov     bl, byte ptr [eax - 0x01]
        test    bl, bl
        jz      next1
        cmp     byte ptr [eax], 0x00
        jz      next1
        cmp     dword ptr [eax + 0x0f], esi
        jnz     next1
        fiadd dword ptr [eax + 0x2033]

next1:
        add     eax, 0x2038
        dec     edx
        jnz     loop1

        lea     eax, [ecx + 0x205f35]
        mov     ecx, 0x18
        pop     ebx

loop2:
        mov     dl, byte ptr [eax - 0x01]
        test    dl, dl
        jz      next2
        cmp     byte ptr [eax], 0x00
        jz      next2
        cmp     dword ptr [eax + 0x03], esi
        jnz     next2
        fiadd dword ptr [eax + 0x2093]

next2:
        add     eax, 0x22ac
        dec     ecx
        jnz     loop2

        pop     esi
        ret     0x04
    }


}
