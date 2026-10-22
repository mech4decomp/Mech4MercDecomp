/* FUN_005fb9f0 - __thiscall: copies a 0xc-dword block from a resolved source
   object (this->field_3d0-ish) into *param_1, then overlays a few fields from
   another object looked up via FUN_00416b60. */
extern int  __cdecl FUN_0041fd80(void);
extern int  __cdecl FUN_00416b60(int *);

__declspec(naked) void func_005fb9f0(void)
{
    __asm {
        sub esp, 0xc
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 0x410]
        mov edx, dword ptr [ebp + 0x40c]
        sub eax, edx
        sar eax, 0x2
        push esi
        push edi
        jz L_5fba63
        mov eax, edx
        cmp dword ptr [eax], 0x0
        jz L_5fba63
        mov ecx, dword ptr [ebp + 0x410]
        mov esi, edx
        sub ecx, esi
        sar ecx, 0x2
        jz L_5fba26
        mov ecx, dword ptr [eax]
        jmp L_5fba28
L_5fba26:
        xor ecx, ecx
L_5fba28:
        mov edx, dword ptr [ecx + 0x17c]
        test edx, edx
        jz L_5fba63
        mov edx, dword ptr [ebp + 0x410]
        sub edx, dword ptr [ebp + 0x40c]
        sar edx, 0x2
        jz L_5fba53
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 0x17c]
        mov esi, dword ptr [eax + 0xd8]
        jmp L_5fba89
L_5fba53:
        xor eax, eax
        mov eax, dword ptr [eax + 0x17c]
        mov esi, dword ptr [eax + 0xd8]
        jmp L_5fba89
L_5fba63:
        lea esi, [ebp + 0x400]
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz L_5fba83
        mov ecx, esi
        call FUN_0041fd80
        mov esi, dword ptr [eax + 0xd8]
        jmp L_5fba89
L_5fba83:
        mov esi, dword ptr [ebp + 0xd8]
L_5fba89:
        mov ebx, dword ptr [esp + 0x20]
        add esi, 0x80
        mov ecx, 0xc
        mov edi, ebx
        rep movsd
        lea ecx, [esp + 0x20]
        push ecx
        lea ecx, [ebp + 0x384]
        mov dword ptr [esp + 0x24], 0x6
        call FUN_00416b60
        test eax, eax
        jz L_5fbaee
        mov eax, dword ptr [eax + 0x2c]
        test eax, eax
        jz L_5fbaee
        mov eax, dword ptr [eax + 0xd8]
        mov edx, dword ptr [eax + 0x9c]
        fld dword ptr [eax + 0x8c]
        add eax, 0x80
        fstp dword ptr [ebx + 0xc]
        mov eax, dword ptr [eax + 0x2c]
        mov ecx, edx
        mov dword ptr [esp + 0x14], edx
        mov edx, eax
        mov dword ptr [ebx + 0x1c], ecx
        mov dword ptr [esp + 0x18], eax
        mov dword ptr [ebx + 0x2c], edx
L_5fbaee:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xc
        ret 0x4
    }
}
