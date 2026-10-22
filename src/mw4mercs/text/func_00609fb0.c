/* func_00609fb0 - animation-blend subsystem */
extern void __cdecl FUN_006b4950(void);
extern void __cdecl FUN_006b47b0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00490660(void);
extern void __cdecl FUN_0048f210(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_0060fe30(void);

extern unsigned int g_7b95a4;
extern unsigned int g_7da848;
extern unsigned int g_7f27e0;
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void func_00609fb0(void)
{
    __asm {
        push esi
        push edi
        push 0x0
        push 0x78c044
        mov edi, ecx
        call FUN_006b4950
        push 0x0
        push 0x78c034
        call FUN_006b47b0
        push 0x0
        push 0x78c024
        call FUN_006b47b0
        push 0x0
        push 0x78c014
        call FUN_006b47b0
        mov eax, dword ptr [edi+0x18]
        lea ecx, [edi+0x18]
        call dword ptr [eax+0x8]
        lea esi, [edi+0x30]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz L_60a023
        mov ecx, esi
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004d2a90
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz L_60a01c
        mov edx, dword ptr [eax]
        push 0x1
        mov ecx, eax
        call dword ptr [edx]
L_60a01c:
        mov ecx, esi
        call FUN_0041fcb0
L_60a023:
        mov eax, dword ptr [g_7b95a4]
        push eax
        call FUN_006f4950
        mov ecx, dword ptr [g_7da848]
        test ecx, ecx
        jz L_60a03e
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
L_60a03e:
        push 0x1c
        call FUN_004084d0
        mov esi, eax
        add esp, 0x4
        test esi, esi
        jz L_60a05d
        mov ecx, esi
        call FUN_00490660
        mov dword ptr [esi], 0x773bc4
        jmp L_60a05f
L_60a05d:
        xor esi, esi
L_60a05f:
        push 0x1003c
        call FUN_004084d0
        add esp, 0x4
        test eax, eax
        jz L_60a081
        push 0x3
        push esi
        mov ecx, eax
        call FUN_0048f210
        mov dword ptr [g_7da848], eax
        jmp L_60a08b
L_60a081:
        mov dword ptr [g_7da848], 0x0
L_60a08b:
        call FUN_006f49a0
        mov eax, dword ptr [edi+0xc]
        test eax, eax
        jz L_60a09d
        push eax
        call FUN_006f4230
L_60a09d:
        mov eax, dword ptr [edi+0x10]
        test eax, eax
        jz L_60a0aa
        push eax
        call FUN_006f4230
L_60a0aa:
        mov ecx, dword ptr [g_7f27e0]
        test ecx, ecx
        jz L_60a0c4
        mov eax, dword ptr [ecx]
        push 0x1
        call dword ptr [eax]
        mov dword ptr [g_7f27e0], 0x0
L_60a0c4:
        mov ecx, dword ptr [edi+0x14]
        test ecx, ecx
        jz L_60a0d8
        mov edx, dword ptr [ecx]
        push 0x1
        call dword ptr [edx]
        mov dword ptr [edi+0x14], 0x0
L_60a0d8:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx+0xc]
        xor ecx, 0x85739531
        add ecx, 0xf4
        call FUN_0060fe30
        pop edi
        pop esi
        ret
    }
}
