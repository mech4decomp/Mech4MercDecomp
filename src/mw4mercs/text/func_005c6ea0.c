/*
 * FUN_005C6EA0 (541 B) — __thiscall (ECX=this), RET 4 (one byte param).
 *
 * Cache lookup/update for a per-slot object (this+0x670/0x678 indexed by
 * param&0xFF). Returns a cached object pointer, or scans a candidate list
 * (FUN_00580540/FUN_005b9560/FUN_005c0d10/FUN_00419480) for the nearest
 * match, caching the result.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __stdcall FUN_00707e70(int param);
extern void *__fastcall FUN_004fcb30(int this);
extern char __stdcall FUN_00415230(void *this, int arg);
extern void __fastcall FUN_00580540(void *this, void *arg);
extern int __fastcall FUN_005b9560(void *this, void *arg);
extern void __cdecl FUN_005c0d10(int arg);
extern void __fastcall FUN_00419480(void *this, void *arg);
extern void __cdecl FUN_004084e0(void *arg);

__declspec(naked) void *__fastcall FUN_005c6ea0(void)
{
    

extern int DAT_0078794c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f268c;
__asm {
sub     esp, 0x3C
        push    ebx
        push    ebp
        mov     ebx, ecx
        mov     ebp, dword ptr [ebx + 0x170]
        mov     eax, dword ptr [ebp + 0x3D4]
        test    eax, eax
        push    esi
        push    edi
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x24], ebp
        jz      L70B1
        mov     edi, dword ptr [esp + 0x50]
        and     edi, 0xFF
        mov     esi, dword ptr [ebx + edi*4 + 0x670]
        cmp     esi, -2
        jz      L6F3E
        fld dword ptr [DAT_0078794c]
        push    0
        fadd    qword ptr [ebx + edi*8 + 0x678]
        fstp    qword ptr [esp + 0x1C]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jz      L6F3E
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L6F3E
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        cmp     al, 1
        jnz     L6F3E
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3C
        ret     4
    L6F3E:
        lea     ecx, [esp + 0x13]
        push    ecx
        lea     ecx, [esp + 0x2C]
        call    FUN_00580540
        mov     ecx, dword ptr [ebp + 0x3D4]
        lea     edx, [esp + 0x28]
        push    edx
        call    FUN_005b9560
        push    eax
        call    FUN_005c0d10
        mov     eax, dword ptr [ebp + 0xD8]
        add     esp, 8
        add     eax, 0x80
        push    eax
        lea     ecx, [esp + 0x38]
        call    FUN_00419480
        mov     eax, dword ptr [esp + 0x2C]
        mov     ebp, dword ptr [esp + 0x28]
        cmp     ebp, eax
        mov     ecx, eax
        mov     dword ptr [esp + 0x18], 0
        mov     dword ptr [esp + 0x14], ecx
        jz      L704E
    L6F98:
        mov     esi, dword ptr [ebp]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esi + 0x30]
        cmp     edx, dword ptr [ecx + 0x30]
        jz      L7037
        mov     al, byte ptr [esp + 0x50]
        test    al, al
        jz      L6FC9
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x60]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        mov     ebx, eax
        call    dword ptr [edx + 0x60]
        cmp     eax, ebx
        mov     ebx, dword ptr [esp + 0x20]
        jz      L7037
    L6FC9:
        mov     eax, dword ptr [esi + 0xD8]
        fld     dword ptr [eax + 0x8C]
        mov     ecx, dword ptr [eax + 0x9C]
        fsubr   dword ptr [esp + 0x34]
        mov     edx, dword ptr [eax + 0xAC]
        fld     dword ptr [esp + 0x38]
        add     eax, 0x80
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x44], ecx
        fsub    dword ptr [esp + 0x44]
        fld     dword ptr [esp + 0x3C]
        mov     dword ptr [esp + 0x48], edx
        fsub    dword ptr [esp + 0x48]
        fld     st(0)
        fmul    st, st(1)
        fld     st(2)
        fmul    st, st(3)
        faddp   st(1), st
        fld     st(3)
        fmul    st, st(4)
        faddp   st(1), st
        fstp    st(3)
        fstp    st(0)
        fstp    st(0)
        jz      L702B
        fcom    dword ptr [esp + 0x18]
        fnstsw  ax
        test    ah, 1
        jz      L7035
    L702B:
        fstp    dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x14], ebp
        jmp     L7037
    L7035:
        fstp    st(0)
    L7037:
        mov     eax, dword ptr [esp + 0x2C]
        add     ebp, 4
        cmp     ebp, eax
        jnz     L6F98
        mov     ecx, dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x28]
    L704E:
        cmp     ecx, eax
        jz      L7089
        mov     esi, dword ptr [ecx]
        mov     eax, dword ptr [esi + 0x30]
        push    0
        mov     dword ptr [ebx + edi*4 + 0x670], eax
        call    FUN_00707e70
        fstp    qword ptr [ebx + edi*8 + 0x678]
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      L707D
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L707D:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x3C
        ret     4
    L7089:
        xor     eax, eax
        cmp     ebp, eax
        mov     dword ptr [ebx + edi*4 + 0x670], 0xFFFFFFFE
        mov     dword ptr [ebx + edi*8 + 0x678], eax
        mov     dword ptr [ebx + edi*8 + 0x67C], eax
        jz      L70B1
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    L70B1:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x3C
        ret     4
    }


}
