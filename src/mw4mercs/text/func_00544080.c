/*
 * FUN_00544080 (249 B) — Update function.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041ee70(int);
extern void __stdcall FUN_0041f030(int, int);
extern void __stdcall FUN_0041ef60(void);
extern void __stdcall FUN_004ce190(int, int, int, int);

__declspec(naked) void __stdcall FUN_00544080(int param_1)
{
    

extern int DAT_007db090;
extern int DAT_007dab40;
extern int DAT_007db094;
extern int DAT_007dab44;
__asm {
sub     esp, 0x28
        push    esi
        mov     esi, ecx
        push    0x0
        lea     ecx, [esp + 0x8]
        call    FUN_0041ee70
        mov     dl, byte ptr [esi + 0x16]
        test    dl, dl
        jz      loc_54409d
        mov     eax, dword ptr [esi + 0x50]
        jmp     loc_5440a0

loc_54409d:
        mov     eax, dword ptr [esi + 0x54]

loc_5440a0:
        mov     ecx, dword ptr [eax + 0xe4]
        test    ecx, ecx
        jz      loc_544169
        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea     eax, [esi + ecx*8 + 0x3548]
        mov     ecx, dword ptr [esp + 0x30]
        cmp     ecx, dword ptr [eax]
        jz      loc_544169
        test    dl, dl
        jz      loc_5440e0
        mov     dword ptr [eax], ecx
        jmp     loc_5440e6

loc_5440e0:
        mov     dword ptr [eax], 0x8

loc_5440e6:
        push    edi
        push    0x1
        lea     edx, [esp + 0x38]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_0041f030
        mov     ecx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x20]
        mov esi, dword ptr [DAT_007dab40]
        sub     eax, ecx
        mov ecx, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x28]
        mov ecx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [ecx]
        xor     ecx, esi
        lea     esi, [ecx + 0x14]
        mov     ecx, dword ptr [esi]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1814]
        mov     edi, dword ptr [ecx + edx*4 + 0x3c44]
        add     ecx, 0x3c3c
        shl     eax, 0x3
        add     edi, eax
        mov     dword ptr [ecx + edx*4 + 0x8], edi
        mov     edi, dword ptr [ecx + 0xc00]
        add     edi, eax
        push    0x1
        lea     eax, [esp + 0xc]
        push    eax
        mov     dword ptr [ecx + 0xc00], edi
        mov     ecx, dword ptr [esi]
        push    0x29
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004ce190
        pop     edi

loc_544169:
        lea     ecx, [esp + 0x4]
        call    FUN_0041ef60
        pop     esi
        add     esp, 0x28
        ret     0x4
    }


}
