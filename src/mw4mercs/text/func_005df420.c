/*
 * FUN_005df420 (177 B) — __thiscall (ECX = this), RET 0.
 *
 * If byte [this+0x41C] == 1, clears [this+0x488], copies 0xC dwords
 * from [this+0xD8]+0x80 into a stack buffer, calls FUN_004daa20,
 * a virtual method via [vtable+0x48], and FUN_004e2690 with a decoded
 * pointer, then FUN_005e1f10. Clears [this+0x10] bit 0x40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004daa20(void *ptr);
extern void __stdcall FUN_004e2690(void *this);
extern void __stdcall FUN_005e1f10(void *this);

__declspec(naked) void __stdcall FUN_005df420(void)
{
    

extern int DAT_007b8d78;
extern int DAT_007b8d80;
extern int DAT_007b8d7c;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x30
        push    ebp
        mov     ebp, ecx
        cmp     byte ptr [ebp + 0x41C], 0x1
        mov     dword ptr [ebp + 0x488], 0x0
        jnz     L_4cc
        mov eax, dword ptr [DAT_007b8d78]
        mov edx, dword ptr [DAT_007b8d80]
        push    esi
        and     dword ptr [ebp + 0x10], 0xFF7FFFFF
        mov     esi, dword ptr [ebp + 0xD8]
        push    edi
        add     esi, 0x80
        mov     ecx, 0xC
        lea     edi, [esp + 0xC]
        rep movsd
        mov ecx, dword ptr [DAT_007b8d7c]
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0xC]
        mov     dword ptr [esp + 0x28], ecx
        push    eax
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x41C], 0x0
        mov     dword ptr [esp + 0x3C], edx
        call    FUN_004daa20
        mov     edx, dword ptr [ebp]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [edx + 0x48]
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x1C]
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004e2690
        mov     ecx, ebp
        mov     byte ptr [ebp + 0x41C], 0x0
        call    FUN_005e1f10
        mov     eax, dword ptr [ebp + 0x10]
        and     eax, 0xFFFFFFBF
        pop     edi
        mov     dword ptr [ebp + 0x10], eax
        pop     esi
    L_4cc:
        pop     ebp
        add     esp, 0x30
        ret
    }


}
