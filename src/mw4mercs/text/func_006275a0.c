/* FUN_006275a0 - __thiscall, 291 bytes
   ABL interpreter region. Iterates a list of objects calling a virtual
   method, then updates several byte fields. */
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004c3d50(void);
extern void __cdecl FUN_00628d30(void);
extern void __cdecl FUN_00628d70(void);
extern void __cdecl FUN_00628c80(void);
extern void __cdecl FUN_00628cc0(void);
extern void __cdecl FUN_00628d00(void);
extern unsigned int g_7dab44;
extern unsigned int g_7dab40;

__declspec(naked) void func_006275a0(void)
{
    __asm {
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi+0xfc]
        sub eax, dword ptr [edi+0xf8]
        test eax, 0xfffffffc
        jz L_c1
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        push ebx
        push esi
        xor edx, dword ptr [g_7dab40]
        mov eax, dword ptr [edx+0x2c]
        xor eax, 0x85739531
        mov ecx, dword ptr [eax+0x6b0]
        test ecx, ecx
        jz L_4a
        lea esi, [edi+0x44]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz L_f1
        mov ecx, esi
        call FUN_0041fcb0
    L_f1:
        mov ecx, dword ptr [g_7dab44]
        mov eax, dword ptr [ecx]
        xor eax, dword ptr [g_7dab40]
        mov edx, dword ptr [eax+0x2c]
        xor edx, 0x85739531
        mov ecx, dword ptr [edx+0x6b0]
        add ecx, 0x27c
        call FUN_0041fd80
        test eax, eax
        jz L_25
        push eax
        mov ecx, esi
        call FUN_0041fcd0
    L_25:
        mov eax, dword ptr [g_7dab44]
        mov edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax]
        xor ecx, edx
        mov edx, dword ptr [ecx+0x2c]
        xor edx, 0x85739531
        mov ecx, dword ptr [edx+0x6b0]
        push 0
        call FUN_004c3d50
    L_4a:
        mov esi, dword ptr [edi+0xf8]
        mov dword ptr [edi+0x3c], 0
        mov ebx, dword ptr [edi+0xfc]
        cmp esi, ebx
        jz L_6f
    L_61:
        mov ecx, dword ptr [esi]
        mov eax, dword ptr [ecx]
        call dword ptr [eax+0x14]
        add esi, 4
        cmp esi, ebx
        jnz L_61
    L_6f:
        xor ecx, ecx
        mov cl, byte ptr [edi+0x169]
        push ecx
        mov ecx, edi
        call FUN_00628d30
        xor edx, edx
        mov dl, byte ptr [edi+0x16a]
        mov ecx, edi
        push edx
        call FUN_00628d70
        xor eax, eax
        mov al, byte ptr [edi+0x16d]
        mov ecx, edi
        push eax
        call FUN_00628c80
        xor ecx, ecx
        mov cl, byte ptr [edi+0x16c]
        push ecx
        mov ecx, edi
        call FUN_00628cc0
        xor edx, edx
        mov dl, byte ptr [edi+0x16f]
        mov ecx, edi
        push edx
        call FUN_00628d00
        pop esi
        pop ebx
    L_c1:
        pop edi
        ret
    }
}
