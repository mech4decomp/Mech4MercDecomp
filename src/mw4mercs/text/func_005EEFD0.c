/*
 * FUN_005EEFD0 (336 B) — __thiscall (this in ecx), no args, returns a
 * byte flag in al. Builds two strings via 0x412570/0x416b60, then
 * conditionally updates a counter and a float field.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005f07c0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_005f0820(void);
extern void __cdecl FUN_0050e1b0(void);
extern void __cdecl FUN_005efcf0(void);
extern void __cdecl FUN_005fbe90(void);
extern void __cdecl FUN_0050e1a0(void);

__declspec(naked) char FUN_005EEFD0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        call    FUN_005f07c0
        mov     ecx, dword ptr [esi + 0x188]
        mov     ebp, eax
        mov     eax, dword ptr [ebp + 0x408]
        push    ecx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x190], 0
        mov     dword ptr [esi + 0x194], eax
        call    FUN_00412570
        lea     edx, [esp + 0x10]
        lea     edi, [ebp + 0x28c]
        push    edx
        mov     ecx, edi
        call    FUN_00416b60
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_5ef033
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_5ef033
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_5ef033:
        mov     eax, dword ptr [esi + 0x18c]
        push    eax
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esi + 0x198], ebx
        call    FUN_00412570
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_00416b60
        mov     edi, eax
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_5ef072
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_5ef072
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_5ef072:
        mov     ecx, esi
        mov     dword ptr [esi + 0x19c], edi
        call    FUN_005f0820
        mov     bl, al
        test    bl, bl
        je      L_5ef118
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        mov     dword ptr [esp + 0x10], 0
        call    dword ptr [edx + 4]
        mov     ecx, dword ptr [eax + 0x44]
        test    ecx, ecx
        jle     L_5ef0d2
        mov     edi, dword ptr [esi + 0x1ac]
        push    edi
        call    FUN_0050e1b0
        add     esp, 4
        test    eax, eax
        jle     L_5ef0d2
        push    edi
        call    FUN_0050e1b0
        add     esp, 4
        mov     ecx, esi
        mov     edi, eax
        call    FUN_005efcf0
        mov     ecx, eax
        mov     eax, edi
        cdq
        idiv    ecx
        dec     eax
        mov     dword ptr [esp + 0x10], eax
L_5ef0d2:
        fild    dword ptr [esp + 0x10]
        mov     ecx, ebp
        fstp    dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        call    FUN_005fbe90
        test    al, al
        je      L_5ef102
        fld     dword ptr [esp + 0x10]
        pop     edi
        fadd    dword ptr [ebp + 0x3b8]
        pop     esi
        mov     al, bl
        fstp    dword ptr [ebp + 0x3b8]
        pop     ebp
        pop     ebx
        pop     ecx
        ret
L_5ef102:
        mov     ecx, esi
        call    FUN_005efcf0
        push    eax
        call    FUN_0050e1a0
        add     esp, 4
        mov     dword ptr [esi + 0x1ac], eax
L_5ef118:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, bl
        pop     ebx
        pop     ecx
        ret
    }
}
