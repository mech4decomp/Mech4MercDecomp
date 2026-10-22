/*
 * FUN_005bdf10 (127 B) - __fastcall (ECX = this).
 *
 * Iterates 0xff entity slots; for each non-current slot, if the slot's
 * name/flag is empty, destroys the object at this+0xb4+slot*4; otherwise
 * calls FUN_005bdf90(slot). Clears this+0xb0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005bdf90(void *this, int slot);

__declspec(naked) void __fastcall FUN_005bdf10(void *this)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     eax, dword ptr [ecx + 0xc]
        push    esi
        xor     eax, 0x85739531
        push    edi
        xor     esi, esi
        lea     edi, [ebp + 0xb4]
        lea     ebx, [eax + 0x353c]
loop_head:
        mov eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        cmp     esi, edx
        jz      next_slot
        mov     al, byte ptr [ebx - 0x4]
        test    al, al
        jz      destroy
        cmp     byte ptr [ebx], 0x0
        jz      destroy
        push    esi
        mov     ecx, ebp
        call    FUN_005bdf90
        jmp     next_slot
destroy:
        mov     ecx, dword ptr [edi]
        test    ecx, ecx
        jz      next_slot
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        mov     dword ptr [edi], 0x0
next_slot:
        inc     esi
        add     edi, 0x4
        add     ebx, 0x2038
        cmp     esi, 0xff
        jl      loop_head
        pop     edi
        pop     esi
        mov     byte ptr [ebp + 0xb0], 0x0
        pop     ebp
        pop     ebx
        ret
    }


}
