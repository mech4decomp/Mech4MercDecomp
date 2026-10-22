/* FUN_005fb8f0 - __thiscall: propagates a value (param_1) to a linked object
   via virtual call (offset 0xd4), then iterates a 0x20-entry list at
   this->field_3d4+0x1d4 calling the same virtual on matching entries. */
extern int  __cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int);
extern void __cdecl FUN_005c0ab0(int, int);
extern int g_7f268c;

__declspec(naked) void func_005fb8f0(void)
{
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 0x8]
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 0x2fc]
        test ecx, ecx
        jz L_5fb90c
        mov eax, dword ptr [ecx]
        push edi
        push ebp
        call dword ptr [eax + 0xd4]
L_5fb90c:
        mov eax, dword ptr [edi + 0x3d4]
        test eax, eax
        jz L_5fb99e
        cmp dword ptr [ebp], 0x0
        jz L_5fb99e
        push ebx
        push esi
        lea ebx, [eax + 0x1d4]
        mov dword ptr [esp + 0x14], 0x20
L_5fb930:
        mov eax, dword ptr [ebx]
        test eax, eax
        jz L_5fb984
        lea esi, [eax + 0x10]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz L_5fb984
        mov ecx, esi
        call FUN_0041fd80
        cmp eax, edi
        jz L_5fb984
        mov ecx, esi
        call FUN_0041fd80
        mov ecx, dword ptr [g_7f268c]
        push ecx
        mov ecx, dword ptr [eax + 0x4]
        call FUN_00415230
        test al, al
        jz L_5fb984
        mov ecx, esi
        call FUN_0041fd80
        mov ecx, dword ptr [eax + 0x2fc]
        test ecx, ecx
        jz L_5fb984
        mov edx, dword ptr [ecx]
        push edi
        push ebp
        call dword ptr [edx + 0xd4]
L_5fb984:
        mov eax, dword ptr [esp + 0x14]
        add ebx, 0x4
        dec eax
        mov dword ptr [esp + 0x14], eax
        jnz L_5fb930
        push edi
        push ebp
        call FUN_005c0ab0
        add esp, 0x8
        pop esi
        pop ebx
L_5fb99e:
        pop edi
        pop ebp
        ret 0x4
    }
}
