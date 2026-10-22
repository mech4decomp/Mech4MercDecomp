/* auto-transcribed 0x5E0335E0 (257 B) */
extern char g_5e77aa74;
extern int  g_5e77abe4;
extern int  g_5e77abe0;
extern void __cdecl FUN_5e02c830(void);
extern void __cdecl FUN_5e02c891(void);
extern void __cdecl FUN_5e02db38(void);

__declspec(naked) void FUN_5e0335e0(void)
{
    __asm {
            push ebp
            mov ebp, esp
            push edi
            push esi
            push ebx
            mov ecx, dword ptr [ebp+0x10]
            or ecx, ecx
            jz L6da
            mov esi, dword ptr [ebp+0x8]
            mov edi, dword ptr [ebp+0xc]
            lea eax, [g_5e77aa74]
            cmp dword ptr [eax+0x8], 0x0
            jnz L651
            mov bh, 0x41
            mov bl, 0x5a
            mov dh, 0x20
            __emit 0x8D /* __emit: MSVC6 drops zero disp on lea ecx,[ecx]; ref needs 8D 49 00 */
            __emit 0x49
            __emit 0x00
L60c:
            mov ah, byte ptr [esi]
            or ah, ah
            mov al, byte ptr [edi]
            jz L635
            or al, al
            jz L635
            inc esi
            inc edi
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp ah,bh; ref needs 38 FC */
            __emit 0xFC
            jc L624
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp ah,bl; ref needs 38 DC */
            __emit 0xDC
            ja L624
            add ah, dh
L624:
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp al,bh; ref needs 38 F8 */
            __emit 0xF8
            jc L62e
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp al,bl; ref needs 38 D8 */
            __emit 0xD8
            ja L62e
            add al, dh
L62e:
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp ah,al; ref needs 38 C4 */
            __emit 0xC4
            jnz L63f
            dec ecx
            jnz L60c
L635:
            xor ecx, ecx
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp ah,al; ref needs 38 C4 */
            __emit 0xC4
            jz L6da
L63f:
            mov ecx, 0xffffffff
            jc L6da
            neg ecx
            jmp L6da
L651:
            lock inc dword ptr [g_5e77abe4]
            cmp dword ptr [g_5e77abe0], 0x0
            jg L665
            push 0x0
            jmp L67e
L665:
            lock dec dword ptr [g_5e77abe4]
            mov ebx, ecx
            push 0x13
            call FUN_5e02c830
            mov dword ptr [esp], 0x1
            mov ecx, ebx
L67e:
            xor eax, eax
            xor ebx, ebx
            mov edi, edi
L684:
            mov al, byte ptr [esi]
            or eax, eax
            mov bl, byte ptr [edi]
            jz L6af
            or ebx, ebx
            jz L6af
            inc esi
            inc edi
            push ecx
            push eax
            push ebx
            call FUN_5e02db38
            mov ebx, eax
            add esp, 0x4
            call FUN_5e02db38
            add esp, 0x4
            pop ecx
            cmp eax, ebx
            jnz L6b5
            dec ecx
            jnz L684
L6af:
            xor ecx, ecx
            cmp eax, ebx
            jz L6be
L6b5:
            mov ecx, 0xffffffff
            jc L6be
            neg ecx
L6be:
            pop eax
            or eax, eax
            jnz L6cc
            lock dec dword ptr [g_5e77abe4]
            jmp L6da
L6cc:
            mov ebx, ecx
            push 0x13
            call FUN_5e02c891
            add esp, 0x4
            mov ecx, ebx
L6da:
            mov eax, ecx
            pop ebx
            pop esi
            pop edi
            leave
            ret
    }
}
