/* func_0051D5C0.c -- in-.text data block 0x51D5C0 (1265 B)
 * Disassembled from reference\MW4Mercs.exe.  printf-style formatter with
 * %-directive handling and a set of obfuscated string/pointer lookups.
 */

extern void (__cdecl *g_76b294)(void);   /* IAT function pointer */
extern void (__cdecl *g_76b320)(void);   /* IAT function pointer */
extern void (__cdecl *g_76b2d0)(void);   /* IAT function pointer */
extern char g_77a0a0[];                  /* string constant */
extern char g_77a098[];                  /* string constant */
extern char g_77a08c[];                  /* string constant */
extern char g_77a084[];                  /* string constant */
extern unsigned int g_7dab44;            /* global */
extern unsigned int g_7dab40;            /* global */
extern void __cdecl FUN_0040f060(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0059cab0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);

__declspec(naked) void func_0051D5C0(void)
{
    __asm {
        sub esp, 0x28
        mov eax, dword ptr [esp+0x34]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [g_76b294]
        push edi
        mov edi, dword ptr [eax]
        mov eax, dword ptr [eax+4]
        push 0x7d0
        mov dword ptr [esp+0x24], edi
        mov dword ptr [esp+0x38], eax
        call esi
        mov ebx, eax
        push 0x7d0
        mov dword ptr [esp+0x20], ebx
        call esi
        push 0x19
        mov dword ptr [esp+0x1c], eax
        call esi
        mov edi, dword ptr [edi]
        or ecx, 0xffffffff
        add esp, 0xc
        mov dword ptr [esp+0x14], eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, ebx
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edi, dword ptr [esp+0x18]
        or ecx, 0xffffffff
        xor ebp, ebp
        xor edx, edx
        xor esi, esi
        xor ebx, ebx
        repne scasb
        not ecx
        dec ecx
        mov dword ptr [esp+0x30], edx
        mov dword ptr [esp+0x1c], ebp
        mov dword ptr [esp+0x44], esi
        je loc_51da34
        jmp loc_51d64c
loc_51d648:
        mov edx, dword ptr [esp+0x30]
loc_51d64c:
        mov ecx, dword ptr [esp+0x18]
        mov al, byte ptr [esi+ecx]
        cmp al, 0x25
        mov edi, dword ptr [esp+0x10]
        mov byte ptr [edi+ebp], al
        jne loc_51da14
        cmp byte ptr [esi+ecx+1], 0x25
        jne loc_51da14
        mov eax, dword ptr [esp+0x1c]
        test eax, eax
        je loc_51da03
        sub esi, edx
        mov eax, ecx
        mov ecx, dword ptr [esp+0x14]
        push esi
        add edx, eax
        push edx
        push ecx
        mov dword ptr [esp+0x28], 0
        call dword ptr [g_76b320]
        mov eax, dword ptr [esp+0x20]
        mov byte ptr [esi+eax], 0
        add esp, 0xc
        mov esi, offset g_77a0a0
loc_51d6a4:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_51d6c8
        test cl, cl
        je loc_51d6c4
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne loc_51d6c8
        add eax, 2
        add esi, 2
        test cl, cl
        jne loc_51d6a4
loc_51d6c4:
        xor eax, eax
        jmp loc_51d6cd
loc_51d6c8:
        sbb eax, eax
        sbb eax, -1
loc_51d6cd:
        test eax, eax
        jne loc_51d7c8
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx+0x44]
        xor edx, 0x85739531
        mov eax, dword ptr [edx+0x1c]
        add eax, 0x14
        push eax
        lea ecx, [esp+0x2c]
        call FUN_0040f060
        mov edi, dword ptr [esp+0x28]
        test edi, edi
        jne loc_51d707
        xor esi, esi
        jmp loc_51d713
loc_51d707:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
loc_51d713:
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx+0x44]
        xor edx, 0x85739531
        mov eax, dword ptr [edx+0x1c]
        add eax, 0x14
        push eax
        lea ecx, [esp+0x28]
        call FUN_0040f060
        mov eax, dword ptr [esp+0x24]
        mov ecx, dword ptr [esp+0x10]
        push esi
        push eax
        lea edx, [ebx+ecx]
        push edx
        call dword ptr [g_76b320]
        add esp, 0xc
        lea ecx, [esp+0x24]
        call FUN_0040d9b0
        lea ecx, [esp+0x28]
        call FUN_0040d9b0
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov edx, dword ptr [ecx+0x44]
        xor edx, 0x85739531
        mov eax, dword ptr [edx+0x1c]
        add eax, 0x14
        push eax
        lea ecx, [esp+0x30]
        call FUN_0040f060
        mov edi, dword ptr [esp+0x2c]
        test edi, edi
        jne loc_51d7a8
        xor ecx, ecx
        lea ebp, [ecx+ebx]
        lea ecx, [esp+0x2c]
        call FUN_0040d9b0
        add dword ptr [esp+0x44], 2
        jmp loc_51da1a
loc_51d7a8:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        lea ebp, [ecx+ebx]
        lea ecx, [esp+0x2c]
        call FUN_0040d9b0
        add dword ptr [esp+0x44], 2
        jmp loc_51da1a
loc_51d7c8:
        mov eax, dword ptr [esp+0x14]
        mov esi, offset g_77a098
loc_51d7d1:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_51d7f5
        test cl, cl
        je loc_51d7f1
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne loc_51d7f5
        add eax, 2
        add esi, 2
        test cl, cl
        jne loc_51d7d1
loc_51d7f1:
        xor eax, eax
        jmp loc_51d7fa
loc_51d7f5:
        sbb eax, eax
        sbb eax, -1
loc_51d7fa:
        test eax, eax
        jne loc_51d869
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, dword ptr [g_7dab40]
        mov eax, dword ptr [ecx+0xc]
        lea edx, [ecx+0xc]
        xor eax, 0x85739531
        mov edi, dword ptr [eax+0xb0]
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        mov eax, dword ptr [esp+0x10]
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr [edx]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx+0xb0]
        push edx
        lea ecx, [ebx+eax]
        push ecx
        call dword ptr [g_76b320]
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax+0xc]
        add esp, 0xc
        xor ecx, 0x85739531
        mov edi, dword ptr [ecx+0xb0]
        jmp loc_51d939
loc_51d869:
        mov eax, dword ptr [esp+0x14]
        mov esi, offset g_77a08c
loc_51d872:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_51d896
        test cl, cl
        je loc_51d892
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne loc_51d896
        add eax, 2
        add esi, 2
        test cl, cl
        jne loc_51d872
loc_51d892:
        xor eax, eax
        jmp loc_51d89b
loc_51d896:
        sbb eax, eax
        sbb eax, -1
loc_51d89b:
        test eax, eax
        jne loc_51d957
        mov eax, dword ptr [g_7dab44]
        mov eax, dword ptr [eax]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax+0xc]
        mov edx, dword ptr [eax+0x44]
        mov esi, dword ptr [eax+0xc]
        mov eax, dword ptr [eax+0x44]
        xor eax, 0x85739531
        mov eax, dword ptr [eax+0x1c]
        mov eax, dword ptr [eax+0x1c]
        xor edx, 0x85739531
        mov edx, dword ptr [edx+0x1c]
        mov ebp, dword ptr [edx+0x1c]
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push eax
        xor esi, 0x85739531
        call dword ptr [edx+0x34]
        mov edx, dword ptr [esi]
        or ecx, 0xffffffff
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        push ecx
        push ebp
        mov ecx, esi
        call dword ptr [edx+0x34]
        push eax
        mov eax, dword ptr [esp+0x18]
        lea ecx, [ebx+eax]
        push ecx
        call dword ptr [g_76b320]
        mov edx, dword ptr [g_7dab44]
        mov eax, dword ptr [edx]
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax+0xc]
        mov eax, dword ptr [eax+0x44]
        xor eax, 0x85739531
        mov eax, dword ptr [eax+0x1c]
        mov eax, dword ptr [eax+0x1c]
        add esp, 0xc
        xor ecx, 0x85739531
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx+0x34]
        mov edi, eax
loc_51d939:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        mov eax, dword ptr [esp+0x44]
        not ecx
        dec ecx
        mov ebp, ecx
        add ebp, ebx
        add eax, 2
        mov dword ptr [esp+0x44], eax
        jmp loc_51da1a
loc_51d957:
        mov eax, dword ptr [esp+0x14]
        mov esi, offset g_77a084
loc_51d960:
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        jne loc_51d984
        test cl, cl
        je loc_51d980
        mov dl, byte ptr [eax+1]
        mov cl, dl
        cmp dl, byte ptr [esi+1]
        jne loc_51d984
        add eax, 2
        add esi, 2
        test cl, cl
        jne loc_51d960
loc_51d980:
        xor eax, eax
        jmp loc_51d989
loc_51d984:
        sbb eax, eax
        sbb eax, -1
loc_51d989:
        test eax, eax
        jne loc_51da1a
        push 0x32
        call FUN_004084d0
        mov edx, dword ptr [g_7dab44]
        mov esi, eax
        mov eax, dword ptr [esp+0x38]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [edx]
        add esp, 4
        push ecx
        xor eax, dword ptr [g_7dab40]
        mov ecx, dword ptr [eax+0x34]
        push esi
        xor ecx, 0x85739531
        call FUN_0059cab0
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        push ecx
        mov ecx, dword ptr [esp+0x14]
        lea edx, [ebx+ecx]
        push esi
        push edx
        call dword ptr [g_76b320]
        mov edx, dword ptr [esp+0x50]
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov ebp, ecx
        add edx, 2
        push esi
        add ebp, ebx
        mov dword ptr [esp+0x54], edx
        call FUN_004084e0
        add esp, 0x10
        jmp loc_51da1a
loc_51da03:
        lea eax, [esi+2]
        mov dword ptr [esp+0x30], eax
        mov ebx, ebp
        mov dword ptr [esp+0x1c], 1
loc_51da14:
        inc esi
        mov dword ptr [esp+0x44], esi
        inc ebp
loc_51da1a:
        mov edi, dword ptr [esp+0x18]
        mov esi, dword ptr [esp+0x44]
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        cmp esi, ecx
        jb loc_51d648
loc_51da34:
        mov ecx, dword ptr [esp+0x20]
        mov eax, dword ptr [ecx]
        test eax, eax
        mov edi, dword ptr [esp+0x10]
        mov byte ptr [edi+ebp], 0
        je loc_51da56
        push eax
        call FUN_006f4230
        mov edx, dword ptr [esp+0x20]
        mov dword ptr [edx], 0
loc_51da56:
        push 0
        push 0x7d0
        call FUN_006f3c80
        or ecx, 0xffffffff
        mov edx, eax
        mov eax, dword ptr [esp+0x20]
        mov dword ptr [eax], edx
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, edx
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr [esp+0x10]
        mov esi, dword ptr [g_76b2d0]
        push ecx
        call esi
        mov edx, dword ptr [esp+0x1c]
        push edx
        call esi
        mov eax, dword ptr [esp+0x1c]
        push eax
        call esi
        add esp, 0xc
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x28
        ret 0xc
    }
}
