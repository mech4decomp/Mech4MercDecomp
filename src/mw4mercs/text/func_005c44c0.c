/*
 * FUN_005c44c0 (339 B) — __stdcall RET (no args) + ECX this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *a);
extern void __stdcall FUN_006f4950(void *a);
extern void __stdcall FUN_00707e70(int a);
extern void __stdcall FUN_00416110(void *a);
extern void __stdcall FUN_005dcd00(void *a);
extern void __stdcall FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005c44c0(void)
{
    

extern int DAT_007f2460;
extern int DAT_007f24cc;
__asm {
sub     esp, 0x8
        push    ebx
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4e0]
        xor     ebx, ebx
        test    eax, 0xfffffffc
        jz      L_4515
        mov     ecx, eax
        and     eax, 0x1
        cmp     al, 0x1
        jnz     L_450f
        mov     edx, ecx
        and     edx, 0x2
        cmp     dl, 0x2
        jnz     L_44fd
        and     ecx, 0xfffffffc
        mov     dword ptr [esi + 0x4e0], ecx
        jz      L_450f
        mov     eax, dword ptr [ecx]
        push    0x3
        call    dword ptr [eax + 0xc]
        jmp     L_450f
L_44fd:
        and     ecx, 0xfffffffc
        mov     dword ptr [esi + 0x4e0], ecx
        jz      L_450f
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx + 0xc]
L_450f:
        mov     dword ptr [esi + 0x4e0], ebx
L_4515:
        mov     dword ptr [esi + 0x4fc], ebx
        mov     dword ptr [esi + 0x588], ebx
        mov     eax, dword ptr [esi + 0x59c]
        mov     ecx, eax
        and     ecx, 0x1
        cmp     cl, 0x1
        mov     dword ptr [esi + 0x504], ebx
        mov     dword ptr [esi + 0x500], ebx
        mov     dword ptr [esi + 0x590], ebx
        mov     dword ptr [esi + 0x58c], ebx
        mov     dword ptr [esi + 0x594], ebx
        jnz     L_4566
        mov     edx, eax
        and     eax, 0xfffffffc
        push    eax
        and     edx, 0x2
        mov     dword ptr [esi + 0x59c], eax
        call    FUN_004084e0
        add     esp, 0x4
L_4566:
        mov eax, dword ptr [DAT_007f2460]
        push    eax
        mov     dword ptr [esi + 0x59c], ebx
        mov     dword ptr [esi + 0x54c], ebx
        call    FUN_006f4950
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x1d4]
        test    al, al
        jz      L_45c7
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x8]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_45af
        mov     dword ptr [eax + 0x4], 0x6
        mov     byte ptr [eax], bl
        jmp     L_45b1
L_45af:
        xor     eax, eax
L_45b1:
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
L_45c7:
        call    FUN_006f49a0
        mov eax, dword ptr [DAT_007f2460]
        push    eax
        mov     byte ptr [esi + 0x51c], bl
        call    FUN_006f4950
        mov     esi, dword ptr [esi + 0x170]
        mov     eax, dword ptr [esi + 0x40c]
        mov     edx, dword ptr [esi + 0x410]
        cmp     eax, edx
        jz      L_4608
L_45f3:
        mov     ecx, dword ptr [eax]
        add     eax, 0x4
        cmp     eax, edx
        mov     dword ptr [ecx + 0x1c8], ebx
        mov     dword ptr [ecx + 0x1cc], ebx
        jnz     L_45f3
L_4608:
        call    FUN_006f49a0
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret
    }


}
