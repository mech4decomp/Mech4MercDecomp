/* auto-transcribed 0x5E033467 (134 B) */
extern void __cdecl FUN_5e0340b0(void);
extern void __cdecl FUN_5e034040(void);

__declspec(naked) void FUN_5e033467(void)
{
    __asm {
            push ebp
            mov ebp, esp
            cmp dword ptr [ebp+0x18], 0x0
            push ebx
            push esi
            mov esi, dword ptr [ebp+0x10]
            push edi
            jz L489
            mov ebx, dword ptr [ebp+0x8]
            mov edi, dword ptr [ebp+0xc]
            mov byte ptr [esi], 0x2d
            inc esi
            neg ebx
            adc edi, 0x0
            neg edi
            jmp L48f
L489:
            mov edi, dword ptr [ebp+0xc]
            mov ebx, dword ptr [ebp+0x8]
L48f:
            mov dword ptr [ebp+0x10], esi
L492:
            xor eax, eax
            push eax
            push dword ptr [ebp+0x14]
            push edi
            push ebx
            call FUN_5e0340b0
            mov dword ptr [ebp+0x18], eax
            xor eax, eax
            push eax
            push dword ptr [ebp+0x14]
            push edi
            push ebx
            call FUN_5e034040
            mov ebx, eax
            mov eax, dword ptr [ebp+0x18]
            cmp eax, 0x9
            mov edi, edx
            jbe L4bf
            add al, 0x57
            jmp L4c1
L4bf:
            add al, 0x30
L4c1:
            mov byte ptr [esi], al
            inc esi
            test edi, edi
            ja L492
            jc L4ce
            test ebx, ebx
            ja L492
L4ce:
            and byte ptr [esi], 0x0
            dec esi
L4d2:
            mov eax, dword ptr [ebp+0x10]
            mov cl, byte ptr [esi]
            mov dl, byte ptr [eax]
            mov byte ptr [esi], dl
            mov byte ptr [eax], cl
            dec esi
            inc eax
            cmp eax, esi
            mov dword ptr [ebp+0x10], eax
            jc L4d2
            pop edi
            pop esi
            pop ebx
            pop ebp
            ret 0x14
    }
}
