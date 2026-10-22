/* auto-transcribed 0x5E033510 (208 B) */
extern char g_5e77aa74;
extern int  g_5e77abe4;
extern int  g_5e77abe0;
extern void __cdecl FUN_5e02c830(void);
extern void __cdecl FUN_5e02c891(void);
extern void __cdecl FUN_5e02db38(void);

__declspec(naked) void FUN_5e033510(void)
{
    __asm {
            push ebp
            mov ebp, esp
            push edi
            push esi
            push ebx
            mov esi, dword ptr [ebp+0xc]
            mov edi, dword ptr [ebp+0x8]
            lea eax, [g_5e77aa74]
            cmp dword ptr [eax+0x8], 0x0
            jnz L563
            mov al, 0xff
            mov edi, edi
L52c:
            or al, al
            jz L55e
            mov al, byte ptr [esi]
            inc esi
            mov ah, byte ptr [edi]
            inc edi
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp ah,al; ref needs 38 C4 */
            __emit 0xC4
            jz L52c
            sub al, 0x41
            cmp al, 0x1a
            sbb cl, cl
            and cl, 0x20
            add al, cl
            add al, 0x41
            xchg ah, al
            sub al, 0x41
            cmp al, 0x1a
            sbb cl, cl
            and cl, 0x20
            add al, cl
            add al, 0x41
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp al,ah; ref needs 38 E0 */
            __emit 0xE0
            jz L52c
            sbb al, al
            sbb al, 0xff
L55e:
            movsx eax, al
            jmp L5db
L563:
            lock inc dword ptr [g_5e77abe4]
            cmp dword ptr [g_5e77abe0], 0x0
            jg L577
            push 0x0
            jmp L58c
L577:
            lock dec dword ptr [g_5e77abe4]
            push 0x13
            call FUN_5e02c830
            mov dword ptr [esp], 0x1
L58c:
            mov eax, 0xff
            xor ebx, ebx
            nop
L594:
            or al, al
            jz L5bf
            mov al, byte ptr [esi]
            inc esi
            mov bl, byte ptr [edi]
            inc edi
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp al,bl; ref needs 38 D8 */
            __emit 0xD8
            jz L594
            push eax
            push ebx
            call FUN_5e02db38
            mov ebx, eax
            add esp, 0x4
            call FUN_5e02db38
            add esp, 0x4
            __emit 0x38 /* __emit: MSVC6 emits 3A form for cmp bl,al; ref needs 38 C3 */
            __emit 0xC3
            jz L594
            sbb eax, eax
            sbb eax, -0x1
L5bf:
            mov ebx, eax
            pop eax
            or eax, eax
            jnz L5cf
            lock dec dword ptr [g_5e77abe4]
            jmp L5d9
L5cf:
            push 0x13
            call FUN_5e02c891
            add esp, 0x4
L5d9:
            mov eax, ebx
L5db:
            pop ebx
            pop esi
            pop edi
            leave
            ret
    }
}
