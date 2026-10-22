/* auto-transcribed 0x5E033395 (92 B) */
__declspec(naked) void FUN_5e033395(void)
{
    __asm {
            push ebp
            mov ebp, esp
            cmp dword ptr [ebp+0x14], 0x0
            mov ecx, dword ptr [ebp+0xc]
            push ebx
            push esi
            push edi
            jz L3af
            mov esi, dword ptr [ebp+0x8]
            mov byte ptr [ecx], 0x2d
            inc ecx
            neg esi
            jmp L3b2
L3af:
            mov esi, dword ptr [ebp+0x8]
L3b2:
            mov edi, ecx
L3b4:
            mov eax, esi
            xor edx, edx
            div dword ptr [ebp+0x10]
            mov eax, esi
            mov ebx, edx
            xor edx, edx
            div dword ptr [ebp+0x10]
            cmp ebx, 0x9
            mov esi, eax
            jbe L3d0
            add bl, 0x57
            jmp L3d3
L3d0:
            add bl, 0x30
L3d3:
            mov byte ptr [ecx], bl
            inc ecx
            test esi, esi
            ja L3b4
            and byte ptr [ecx], 0x0
            dec ecx
L3de:
            mov dl, byte ptr [edi]
            mov al, byte ptr [ecx]
            mov byte ptr [ecx], dl
            mov byte ptr [edi], al
            dec ecx
            inc edi
            cmp edi, ecx
            jc L3de
            pop edi
            pop esi
            pop ebx
            pop ebp
            ret
    }
}
