/*
 * FUN_005c8be0 (506 B) — __thiscall (ECX = this), RET 8 (two float* params).
 *
 * Aiming update. If a random gate fails, copies this->[0x638]/[0x63c] into
 * the two out-params. Otherwise computes angles via vtable methods, applies
 * clamping against several constants, and stores results back into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float __stdcall FUN_00707e70(int a);
extern float __cdecl FUN_00682dd0(void *a);
extern float __cdecl FUN_00682d80(void *a);
extern float __cdecl FUN_005c0c50(void);
extern void *__stdcall FUN_005d8820(void *a, int b, int c);
extern void *FUN_0041fd80(void);
extern void __cdecl FUN_00415020(void);

__declspec(naked) void __stdcall FUN_005c8be0(void *param1, void *param2)
{
    

extern int DAT_00787944;
extern int DAT_0076d048;
extern int DAT_007f2440;
extern int DAT_0076f5d8;
extern int DAT_0076c5b0;
extern int DAT_0076d070;
extern int DAT_00787908;
extern int DAT_00782350;
__asm {
sub     esp, 0x14
        fld dword ptr [DAT_00787944]
        push    esi
        mov     esi, ecx
        fadd    qword ptr [esi + 0x630]
        push    0x0
        fstp    qword ptr [esp + 0x8]
        call    FUN_00707e70
        fcomp   qword ptr [esp + 0x4]
        fnstsw  ax
        test    ah, 0x1
        jz      L_8c27
        mov     eax, dword ptr [esi + 0x638]
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esi + 0x63c]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [eax], edx
        pop     esi
        add     esp, 0x14
        ret     0x8
    L_8c27:
        push    ebx
        push    ebp
        push    edi
        mov     edi, dword ptr [esi + 0x170]
        push    edi
        call    FUN_00682dd0
        fst     dword ptr [esp + 0x14]
        mov     ebp, dword ptr [esp + 0x2c]
        push    edi
        fstp    dword ptr [ebp]
        call    FUN_00682d80
        fld     st(0)
        mov     ebx, dword ptr [esp + 0x34]
        fstp    dword ptr [ebx]
        add     esp, 0x8
        fcomp   dword ptr [esp + 0x10]
        fnstsw  ax
        test    ah, 0x41
        jz      L_8c69
        fld     dword ptr [esp + 0x10]
        fadd dword ptr [DAT_0076d048]
        fstp    dword ptr [ebx]
    L_8c69:
        mov     al, byte ptr [esi + 0x6a1]
        test    al, al
        mov     dword ptr [esp + 0x28], 0x447a0000
        jnz     L_8c84
        call    FUN_005c0c50
        fstp    dword ptr [esp + 0x28]
    L_8c84:
        mov ecx, dword ptr [DAT_007f2440]
        test    ecx, ecx
        jz      L_8d76
        mov     eax, dword ptr [edi + 0xd8]
        mov     edx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [eax + 0x1c]
        push    0x0
        mov     dword ptr [esp + 0x20], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    0x0
        lea     edx, [esp + 0x20]
        push    edx
        mov     dword ptr [esp + 0x38], 0x0
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_005d8820
        test    eax, eax
        jz      L_8cdc
        fld     dword ptr [eax + 0x44]
        fmul dword ptr [DAT_0076f5d8]
        fstp    dword ptr [esp + 0x2c]
    L_8cdc:
        lea     ecx, [esi + 0x1c8]
        call    FUN_0041fd80
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [esp + 0x18], ecx
        mov     edx, dword ptr [eax + 0x1c]
        push    0x0
        push    0x0
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x24], edx
        mov     eax, dword ptr [eax + 0x2c]
        push    ecx
        mov ecx, dword ptr [DAT_007f2440]
        mov     dword ptr [esp + 0x2c], eax
        call    FUN_005d8820
        fld     dword ptr [esp + 0x2c]
        mov     ecx, eax
        test    ecx, ecx
        jz      L_8d48
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [ecx + 0x44]
        fmul dword ptr [DAT_0076f5d8]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_8d48
        fadd    dword ptr [esp + 0x2c]
        fmul dword ptr [DAT_0076d070]
    L_8d48:
        fcom    dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x1
        jz      L_8d59
        fstp    dword ptr [esp + 0x28]
        jmp     L_8d5b
    L_8d59:
        fstp    st(0)
    L_8d5b:
        fld     dword ptr [esp + 0x28]
        fcomp dword ptr [DAT_00787908]
        fnstsw  ax
        test    ah, 0x1
        jz      L_8d76
        mov edx, dword ptr [DAT_00787908]
        mov     dword ptr [esp + 0x28], edx
    L_8d76:
        fld     dword ptr [ebx]
        fcomp   dword ptr [esp + 0x28]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_8d89
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [ebx], eax
    L_8d89:
        fld     dword ptr [ebx]
        fmul dword ptr [DAT_00782350]
        fld     dword ptr [esp + 0x10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x41
        jnz     L_8da3
        fstp    dword ptr [ebp]
        jmp     L_8da5
    L_8da3:
        fstp    st(0)
    L_8da5:
        call    FUN_00415020
        fstp    qword ptr [esp + 0x10]
        push    0x0
        call    FUN_00707e70
        fadd    qword ptr [esp + 0x10]
        mov     ecx, dword ptr [ebp]
        mov     edx, dword ptr [ebx]
        pop     edi
        fstp    qword ptr [esi + 0x630]
        pop     ebp
        pop     ebx
        mov     dword ptr [esi + 0x638], ecx
        mov     dword ptr [esi + 0x63c], edx
        pop     esi
        add     esp, 0x14
        ret     0x8
    }


}
