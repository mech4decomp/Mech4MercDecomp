/* MLR mesh FUN_00448d80 (122 bytes, __thiscall RET 0x4) */

extern void __cdecl FUN_00448e40(void);

__declspec(naked) void func_00448d80(void)
{
    __asm {
        push esi
        mov esi, ecx
        mov cl, byte ptr [esp + 0x8]
        cmp cl, byte ptr [esi + 0x18a]
        jz L_448df6
        mov al, byte ptr [esi + 0x18b]
        cmp cl, al
        jnc L_448d9b
        mov al, cl
L_448d9b:
        test al, al
        mov byte ptr [esp + 0x8], al
        jbe L_448dc0
L_448da3:
        mov ecx, dword ptr [esp + 0x8]
        and ecx, 0xff
        mov edx, dword ptr [esi + ecx*0x4 + 0xa8]
        test edx, edx
        jnz L_448dc0
        dec al
        mov byte ptr [esp + 0x8], al
        jnz L_448da3
L_448dc0:
        mov ecx, esi
        mov byte ptr [esi + 0x18a], al
        call FUN_00448e40
        mov ecx, dword ptr [esi + 0x34]
        xor edx, edx
        mov dl, byte ptr [esi + 0x18a]
        or ecx, 0x3fff
        mov eax, dword ptr [esi + edx*0x4 + 0xa8]
        mov dword ptr [esi + 0x34], ecx
        mov ecx, dword ptr [esi + 0x2c]
        and ecx, 0xffffc000
        or ecx, eax
        mov dword ptr [esi + 0x2c], ecx
L_448df6:
        pop esi
        ret 0x4
    }
}
