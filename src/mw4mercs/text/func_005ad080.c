/*
 * FUN_005ad080 (145 B) — __thiscall (ECX = this), RET 4 (one byte param).
 *
 * If param != 0: if this->0x22 == 0, set this->0x22=1 and clear
 * DAT_007dc6e0->0x78; then conditionally call FUN_006276f0().
 * If param == 0: if this->0x22 != 0, set this->0x22=0, set
 * DAT_007dc6e0->0x78=1 and DAT_007dc6e0->0x74=0x40166666; then
 * conditionally call FUN_006275a0().
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_006276f0(void *this);
extern void __fastcall FUN_006275a0(void *this);

__declspec(naked) void __fastcall FUN_005ad080(void)
{
    

extern int DAT_007dc6e0;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     dl, byte ptr [esp + 0x4]
        xor     al, al
        cmp     dl, al
        mov     dl, byte ptr [ecx + 0x22]
        jz      L_cc
        cmp     dl, al
        jnz     L_9e
        mov     byte ptr [ecx + 0x22], 1
        mov ecx, dword ptr [DAT_007dc6e0]
        mov     byte ptr [ecx + 0x78], al
L_9e:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_0e
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_006276f0
        ret     4
L_cc:
        cmp     dl, al
        jz      L_e3
        mov     byte ptr [ecx + 0x22], al
        mov eax, dword ptr [DAT_007dc6e0]
        mov     byte ptr [eax + 0x78], 1
        mov     dword ptr [eax + 0x74], 0x40166666
L_e3:
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_0e
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_006275a0
L_0e:
        ret     4
    }


}
