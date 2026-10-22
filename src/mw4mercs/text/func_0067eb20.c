/*
 * FUN_0067EB20 (272 B) — HUD map object update (RET 0x4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_007db090;
extern unsigned int g_007dab44;
extern unsigned int g_007dab40;

extern void __cdecl FUN_0041eb40(void);
extern void __cdecl FUN_00680ad0(void);
extern void __cdecl FUN_0067f7f0(void);
extern void __cdecl FUN_00680190(void);
extern void __cdecl FUN_0069d4a0(void);
extern void __cdecl FUN_006ad130(void);

__declspec(naked) void __fastcall FUN_0067eb20(void)
{
    __asm {
        mov     ecx, dword ptr [g_007db090]
        mov     edx, dword ptr [g_007dab44]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [g_007dab40]
        sub     esp, 0xc
        xor     ecx, edx
        mov     edx, dword ptr [ecx]
        push    ebp
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + eax*4 + 0xb4]
        test    esi, esi
        push    edi
        jz      L_ec27
        mov     ebp, dword ptr [esp + 0x1c]
        push    0x8
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, esi
        call    FUN_00680ad0
        mov     edi, eax
        test    edi, edi
        jz      L_ec27
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        mov     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [g_007db090]
        mov     esi, dword ptr [edi + 0x30]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0xc]
        xor     eax, eax
        mov     al, byte ptr [edx + 0x28]
        push    ebx
        push    esi
        xor     ecx, 0x85739531
        push    0x0
        mov     edx, eax
        shl     edx, 0x7
        add     edx, eax
        shl     edx, 0x3
        sub     edx, eax
        mov     ebx, dword ptr [ecx + edx*8 + 0x3584]
        lea     eax, [esp + 0x1c]
        push    eax
        call    FUN_0067f7f0
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_00680190
        fstp    dword ptr [esp + 0x30]
        mov     eax, dword ptr [g_007db090]
        mov     ecx, dword ptr [esp + 0x30]
        mov     edi, dword ptr [edi + 0x2c]
        mov     ebx, dword ptr [ebx + 0x170]
        push    ecx
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        push    esi
        push    edi
        push    edx
        push    0x0
        push    0x0
        push    0x0
        push    ebp
        push    ebx
        call    FUN_0069d4a0
        mov     eax, dword ptr [g_007db090]
        mov     ecx, dword ptr [esp + 0x54]
        push    ecx
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        push    esi
        push    edi
        push    edx
        push    0x0
        push    0x0
        push    0x0
        push    ebp
        push    ebx
        call    FUN_006ad130
        add     esp, 0x58
        pop     ebx
L_ec27:
        pop     edi
        pop     esi
        pop     ebp
        add     esp, 0xc
        ret     0x4
    }
}
