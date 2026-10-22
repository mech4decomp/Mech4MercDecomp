/*
 * FUN_0064A8F0 (567 B) — ABL module/instance registry allocation.
 * Allocates two registries via the AblStackHeap (DAT_008058b8) and
 * zero-fills them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058b8;
extern int g_80d978;
extern int g_80d970;
extern int g_80d974;
extern char g_792ab8[];
extern char g_792a78[];

extern void *__cdecl FUN_006f3c80(int a, int b);
extern void *__cdecl FUN_004084d0(int a);
extern void *__cdecl FUN_0061ee80(int a, void *b, int c);
extern void __cdecl FUN_0064c940(int a, int b);
extern void __cdecl FUN_0064c920(int a, int b);
extern void __cdecl FUN_00562f10(int a, char *b);

__declspec(naked) void FUN_0064A8F0(int param_1)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [g_8058b8]
        mov     ecx, dword ptr [esi + 0xc]
        mov     dword ptr [g_80d978], eax
        lea     eax, [eax + eax*4]
        shl     eax, 0x3
        test    ecx, ecx
        push    edi
        jz      loc_64a9db
        push    ecx
        push    eax
        call    FUN_006f3c80
        mov     edi, dword ptr [esi + 0x14]
        mov     ebx, dword ptr [esi + 0x18]
        cmp     edi, ebx
        mov     dword ptr [esp + 0x10], eax
        jz      loc_64a941
        test    edi, edi
        jz      loc_64a932
        mov     dword ptr [edi], eax
loc_64a932:
        mov     eax, dword ptr [esp + 0x10]
        add     edi, 0x4
        mov     dword ptr [esi + 0x14], edi
        jmp     loc_64a9dd
loc_64a941:
        mov     ebp, dword ptr [esi + 0x10]
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x1c]
        jc      loc_64a964
        lea     ecx, [esp + 0x14]
loc_64a964:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      loc_64a984
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     loc_64a98c
loc_64a984:
        mov     dword ptr [esp + 0x1c], 0x0
loc_64a98c:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    edi
        push    ebp
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      loc_64a9a5
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], edx
loc_64a9a5:
        add     eax, 0x4
        push    eax
        push    edi
        push    edi
        call    FUN_0061ee80
        sub     ebx, ebp
        sar     ebx, 0x2
        push    ebx
        push    ebp
        mov     edi, eax
        call    FUN_0064c940
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x28]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [esi + 0x10], eax
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        mov     dword ptr [esi + 0x14], edi
        mov     dword ptr [esi + 0x18], edx
        jmp     loc_64a9dd
loc_64a9db:
        xor     eax, eax
loc_64a9dd:
        test    eax, eax
        mov     dword ptr [g_80d970], eax
        jnz     loc_64a9f4
        push    offset g_792ab8
        push    eax
        call    FUN_00562f10
        add     esp, 0x8
loc_64a9f4:
        mov     edx, dword ptr [g_80d978]
        mov     edi, dword ptr [g_80d970]
        lea     ecx, [edx + edx*4]
        shl     ecx, 0x3
        mov     esi, ecx
        shr     ecx, 0x2
        xor     eax, eax
        rep stosd
        mov     ecx, esi
        and     ecx, 0x3
        rep stosb
        mov     edi, dword ptr [g_8058b8]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        lea     ecx, [edx*4]
        jz      loc_64aaf6
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     ebx, dword ptr [edi + 0x14]
        mov     esi, dword ptr [edi + 0x18]
        cmp     ebx, esi
        mov     dword ptr [esp + 0x10], eax
        jz      loc_64aa58
        test    ebx, ebx
        jz      loc_64aa49
        mov     dword ptr [ebx], eax
loc_64aa49:
        mov     eax, dword ptr [esp + 0x10]
        add     ebx, 0x4
        mov     dword ptr [edi + 0x14], ebx
        jmp     loc_64aaf8
loc_64aa58:
        mov     ebp, dword ptr [edi + 0x10]
        mov     eax, ebx
        sub     eax, ebp
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x1c], 0x1
        mov     dword ptr [esp + 0x14], eax
        lea     ecx, [esp + 0x1c]
        jc      loc_64aa7b
        lea     ecx, [esp + 0x14]
loc_64aa7b:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp + 0x14], ecx
        jz      loc_64aa9b
        lea     eax, [ecx*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x1c], eax
        jmp     loc_64aaa3
loc_64aa9b:
        mov     dword ptr [esp + 0x1c], 0x0
loc_64aaa3:
        mov     ecx, dword ptr [esp + 0x1c]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_0061ee80
        add     esp, 0xc
        test    eax, eax
        jz      loc_64aabc
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax], edx
loc_64aabc:
        add     eax, 0x4
        push    eax
        push    ebx
        push    ebx
        call    FUN_0061ee80
        sub     esi, ebp
        add     esp, 0xc
        sar     esi, 0x2
        push    esi
        lea     esi, [edi + 0x18]
        push    ebp
        mov     ecx, esi
        mov     ebx, eax
        call    FUN_0064c920
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [eax + ecx*4]
        mov     dword ptr [edi + 0x10], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x14], ebx
        mov     dword ptr [esi], edx
        jmp     loc_64aaf8
loc_64aaf6:
        xor     eax, eax
loc_64aaf8:
        test    eax, eax
        mov     dword ptr [g_80d974], eax
        jnz     loc_64ab0f
        push    offset g_792a78
        push    eax
        call    FUN_00562f10
        add     esp, 0x8
loc_64ab0f:
        mov     ecx, dword ptr [g_80d978]
        mov     edi, dword ptr [g_80d974]
        xor     eax, eax
        rep stosd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
