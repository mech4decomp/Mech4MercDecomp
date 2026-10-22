// FUN_1001cfb0 (0x1001CFB0) __stdcall, 237 bytes
extern void * __cdecl FUN_100381e9(void *, int);
extern int __cdecl FUN_100381b1(void *, void *, int);
extern unsigned short g_10050c84[];
extern unsigned int g_10050c80[];

__declspec(naked) void FUN_1001cfb0(void)
{
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp+0x1c]
        test edi, edi
        jz loc_d093
        mov esi, dword ptr [esp+0x18]
        push 0x26
        push esi
        call FUN_100381e9
        add esp, 8
        test eax, eax
        jz loc_d093
        sub eax, esi
        sar eax, 1
        mov ebx, eax
        cmp ebx, edi
        mov ecx, ebx
        mov dword ptr [esp+0x10], ecx
        jnc loc_d087
        __emit 0x8D   /* __emit: lea esp,[esp] zero-disp form; MSVC6 drops the 00 disp byte */
        __emit 0x64
        __emit 0x24
        __emit 0x00
loc_dff0:
        mov ax, word ptr [esi+ebx*2]
        cmp ax, 0x26
        jz loc_d005
        mov word ptr [esi+ecx*2], ax
        inc ecx
        mov dword ptr [esp+0x10], ecx
        jmp loc_d07e
loc_d005:
        xor esi, esi
        mov edi, 0x10050c70
        xor ebp, ebp
        mov edi, edi
loc_d010:
        mov eax, dword ptr [esp+0x18]
        mov cx, word ptr [eax+ebx*2+2]
        cmp cx, word ptr [edi]
        lea eax, [eax+ebx*2+2]
        jnz loc_d034
        mov edx, dword ptr [edi+0x10]
        push edx
        push edi
        push eax
        call FUN_100381b1
        add esp, 0xc
        test eax, eax
        jz loc_d04d
loc_d034:
        add ebp, 0x18
        inc esi
        add edi, 0x18
        cmp ebp, 0x60
        jc loc_d010
loc_d040:
        pop edi
        pop esi
        pop ebp
        mov eax, 0xc1121c06
        pop ebx
        pop ecx
        ret 0xc
loc_d04d:
        mov edx, dword ptr [esp+0x18]
        mov edi, dword ptr [esp+0x10]
        lea eax, [esi+esi*2]
        shl eax, 3
        mov cx, word ptr [eax + g_10050c84]
        mov word ptr [edx+edi*2], cx
        add ebx, dword ptr [eax + g_10050c80]
        cmp esi, 4
        jnc loc_d040
        mov ecx, edi
        mov edi, dword ptr [esp+0x1c]
        inc ecx
        mov dword ptr [esp+0x10], ecx
        mov esi, edx
loc_d07e:
        inc ebx
        cmp ebx, edi
        jc loc_dff0
loc_d087:
        mov eax, dword ptr [esp+0x20]
        mov word ptr [esi+ecx*2], 0
        mov dword ptr [eax], ecx
loc_d093:
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        pop ecx
        ret 0xc
    }
}
