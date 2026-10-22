/* func_006127B0.c -- in-.text data block (block 0x6124EB), 390 bytes.
   Single function: sets up object state, iterates a list via FUN_0040C0E0,
   and configures a 3D object. */

extern int g_7f27e0;
extern unsigned char g_7b5514;
extern int g_7f2260;
extern int g_7f2264;
extern int g_7f26a4;
extern int g_7da848;
extern float g_7704c0;
extern float g_78c1b4;

extern void FUN_004C3D50(void);
extern void FUN_0040C0E0(void);
extern void FUN_00415230(void);
extern void FUN_0060CEB0(void);
extern void FUN_0048FBA0(void);
extern void FUN_00419460(void);
extern void FUN_0041A070(void);

__declspec(naked) void func_006127B0(void)
{
    __asm {
        sub esp, 0x48
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        mov ecx, dword ptr [g_7f27e0]
        push 0
        call FUN_004C3D50
        mov ecx, dword ptr [ebp + 4]
        test ecx, ecx
        je L_6127da
        mov eax, dword ptr [ecx]
        push 1
        call dword ptr [eax]
        mov dword ptr [ebp + 4], 0
L_6127da:
        mov esi, dword ptr [esp + 0x5c]
        mov cl, byte ptr [esi + 0x274]
        mov edx, dword ptr [esi + 0x278]
        mov eax, dword ptr [esi + 0x27c]
        mov ebx, dword ptr [esi + 0xd8]
        mov byte ptr [g_7b5514], cl
        mov ecx, dword ptr [ebp + 0x14]
        mov dword ptr [g_7f2260], edx
        mov edx, dword ptr [ecx]
        push ebx
        mov dword ptr [ebp + 4], esi
        mov dword ptr [g_7f2264], eax
        call dword ptr [edx + 8]
        add esi, 0xbc
        mov dword ptr [esp + 0x14], esi
        mov eax, dword ptr [esi]
        lea ecx, [esp + 0x10]
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [esp + 0x10], 0x772d80
        call FUN_0040C0E0
        mov esi, eax
        test esi, esi
        je L_612863
L_61283a:
        mov eax, dword ptr [g_7f26a4]
        mov ecx, dword ptr [esi + 4]
        push eax
        call FUN_00415230
        test al, al
        je L_612854
        push esi
        mov ecx, ebp
        call FUN_0060CEB0
L_612854:
        lea ecx, [esp + 0x10]
        call FUN_0040C0E0
        mov esi, eax
        test esi, esi
        jne L_61283a
L_612863:
        mov ecx, dword ptr [g_7da848]
        call FUN_0048FBA0
        mov ecx, dword ptr [g_7f27e0]
        push ebx
        call FUN_004C3D50
        push 0x7b9460
        lea ecx, [esp + 0x2c]
        call FUN_00419460
        fld dword ptr [g_7704c0]
        fsub dword ptr [g_78c1b4]
        lea ecx, [esp + 0x1c]
        push ecx
        lea ecx, [esp + 0x2c]
        fstp dword ptr [esp + 0x20]
        fld dword ptr [g_78c1b4]
        mov dword ptr [esp + 0x24], 0
        fstp dword ptr [esp + 0x28]
        call FUN_0041A070
        mov dword ptr [esp + 0x34], 0x40b00000
        mov dword ptr [esp + 0x44], 0x40c00000
        mov dword ptr [esp + 0x54], 0x41b80000
        mov edx, dword ptr [ebx + 0x18]
        mov eax, dword ptr [ebx]
        and edx, 0xfffffffe
        or edx, 4
        mov ecx, ebx
        mov dword ptr [ebx + 0x18], edx
        call dword ptr [eax + 0x10]
        lea edi, [ebx + 0x20]
        mov ecx, 0xc
        lea esi, [esp + 0x28]
        rep movsd
        mov ecx, ebx
        call dword ptr [ebx + 0x1c]
        mov ecx, dword ptr [g_7f27e0]
        call dword ptr [ecx + 0x1c]
        mov esi, dword ptr [ebp + 0x14]
        mov eax, dword ptr [esi + 0x18]
        mov edx, dword ptr [esi]
        and eax, 0xffffff3f
        mov ecx, esi
        mov dword ptr [esi + 0x10], 0
        mov dword ptr [esi + 0x18], eax
        call dword ptr [edx + 0x10]
        mov eax, dword ptr [esi]
        mov ecx, esi
        call dword ptr [eax + 0x14]
        mov ecx, esi
        call dword ptr [esi + 0x1c]
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x48
        ret 4
    }
}
