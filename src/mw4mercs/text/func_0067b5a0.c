/* FUN_0067b5a0 - HUD debug menu update */
extern int g_7dab44;
extern int g_7dab40;
extern int g_7f20d0;
extern float g_77016c;
extern int __cdecl FUN_0067a640(void);
extern void __cdecl FUN_0054fd90(void);
extern void __cdecl FUN_0040ca40(void);
extern void __cdecl FUN_0040c9e0(void);
extern void *__cdecl FUN_0067a500(void);
extern void __cdecl FUN_00557f60(void);
extern void __cdecl FUN_0041acb0(void);

__declspec(naked) void func_0067b5a0(void)
{
    __asm {
        mov eax, dword ptr [g_7dab44]
        mov eax, dword ptr [eax]
        sub esp, 0x54
        push edi
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax + 0x14]
        xor ecx, 0x85739531
        mov dl, byte ptr [ecx + 0x17fc]
        test dl, dl
        jz done
        mov ecx, dword ptr [g_7f20d0]
        test ecx, ecx
        jz done
        mov edx, dword ptr [eax + 0xc]
        xor edx, 0x85739531
        mov eax, dword ptr [edx + 0x50]
        mov ecx, dword ptr [eax + 0x5c]
        test ecx, ecx
        jz done
        push esi
        call FUN_0067a640
        mov ecx, dword ptr [esp + 0x60]
        mov edx, dword ptr [ecx + 0x30]
        mov dword ptr [eax + 0x10], edx
        mov ecx, dword ptr [ecx + 0xd8]
        lea esi, [ecx + 0x80]
        lea eax, [esp + 0x14]
        push eax
        mov ecx, esi
        call FUN_0054fd90
        mov ecx, dword ptr [esp + 0x14]
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [esp + 0x1c]
        mov dword ptr [esp + 0x8], ecx
        push 0x41800000
        lea ecx, [esp + 0xc]
        push ecx
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x14], edx
        mov dword ptr [esp + 0x18], eax
        call FUN_0040ca40
        mov ecx, 0xc
        lea edi, [esp + 0x2c]
        rep movsd
        mov edx, dword ptr [esp + 0x38]
        mov eax, dword ptr [esp + 0x48]
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [esp + 0x20], edx
        lea edx, [esp + 0x20]
        mov dword ptr [esp + 0x24], eax
        push edx
        lea eax, [esp + 0xc]
        mov dword ptr [esp + 0x2c], ecx
        push eax
        lea ecx, [esp + 0x10]
        call FUN_0040c9e0
        mov ecx, dword ptr [esp + 0x8]
        mov edx, dword ptr [esp + 0xc]
        mov eax, dword ptr [esp + 0x10]
        push 0x0
        push 0x2
        mov dword ptr [esp + 0x40], ecx
        mov dword ptr [esp + 0x50], edx
        mov dword ptr [esp + 0x60], eax
        call FUN_0067a500
        mov ecx, eax
        call FUN_00557f60
        call FUN_0067a500
        mov ecx, dword ptr [esp + 0x38]
        add eax, 0x518
        mov dword ptr [eax], ecx
        mov edx, dword ptr [esp + 0x48]
        mov dword ptr [eax + 0x4], edx
        mov ecx, dword ptr [esp + 0x58]
        mov dword ptr [eax + 0x8], ecx
        call FUN_0067a500
        fld dword ptr [eax + 0x51c]
        add eax, 0x51c
        fadd dword ptr [g_77016c]
        lea edx, [esp + 0x2c]
        push edx
        lea ecx, [esp + 0x24]
        fstp dword ptr [eax]
        call FUN_0041acb0
        call FUN_0067a500
        mov ecx, dword ptr [esp + 0x24]
        add eax, 0x524
        mov dword ptr [eax + 0x4], ecx
        mov edx, dword ptr [esp + 0x20]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esp + 0x28]
        mov dword ptr [eax + 0x8], ecx
        pop esi
done:
        pop edi
        add esp, 0x54
        ret
    }
}
