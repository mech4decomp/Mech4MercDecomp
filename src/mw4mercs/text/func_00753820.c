/*
 * FUN_00753820 (271 B) — __thiscall (ECX = this), RET 0x18 (6 stack params).
 * Computes an index into a 0x7c-entry table (DAT_008b7ad0), calls
 * FUN_007358e0 then FUN_00742e00, and conditionally FUN_0075c060.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b7ad0[];

extern void __stdcall FUN_007358e0(void);
extern void __stdcall FUN_00742e00(int a, int b, int c, int d, int e, int f, int g, int h, int i);
extern void __stdcall FUN_0075c060(void);
extern void __stdcall FUN_00753930(void);

__declspec(naked) void __stdcall FUN_00753820(void *this)
{
    __asm {
        mov     edx, dword ptr [esp + 0x18]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        xor     eax, eax
        push    esi
        mov     esi, ecx
        mov     ax, word ptr [esi + 0x2]
        xor     ecx, ecx
        mov     cx, word ptr [esi]
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, edx
        xor     ecx, edi
        or      eax, ecx
        mov     ecx, dword ptr [esp + 0x18]
        or      eax, ebx
        or      eax, ecx
        jz      L_389b
        xor     eax, eax
        mov     ax, word ptr [esi + 0x6]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x4]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    edi
        push    edx
        mov     ebp, eax
        shr     ebp, 0x7
        shr     ecx, 0xa
        and     ebp, 0x1
        and     ecx, 0x7
        lea     ecx, [ebp + ecx*2]
        mov     ebp, eax
        shr     ebp, 0xe
        lea     ecx, [ebp + ecx*4]
        push    ebx
        push    eax
        mov     eax, dword ptr [esp + 0x34]
        mov     ebp, ecx
        shl     ebp, 0x5
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        push    ecx
        push    0x0
        lea     ebp, [ebp*4 + g_8b7ad0]
        push    0x1
        jmp     L_38e7
L_389b:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x6]
        xor     ecx, ecx
        mov     cx, word ptr [esi + 0x4]
        push    edx
        mov     edx, dword ptr [esp + 0x1c]
        push    edi
        push    edx
        mov     ebp, eax
        shr     ebp, 0x7
        shr     ecx, 0xa
        and     ebp, 0x1
        and     ecx, 0x7
        lea     ecx, [ebp + ecx*2]
        mov     ebp, eax
        shr     ebp, 0xe
        lea     ecx, [ebp + ecx*4]
        push    ebx
        push    eax
        mov     eax, dword ptr [esp + 0x34]
        mov     ebp, ecx
        shl     ebp, 0x5
        sub     ebp, ecx
        mov     ecx, dword ptr [esp + 0x30]
        push    eax
        push    ecx
        push    0x0
        lea     ebp, [ebp*4 + g_8b7ad0]
        push    0x0
L_38e7:
        mov     ecx, esi
        call    FUN_007358e0
        mov     edx, dword ptr [ebp + 0x54]
        push    eax
        push    edx
        call    FUN_00742e00
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_391d
        mov     al, byte ptr [esi + 0x4]
        shr     al, 0x7
        test    al, 0x1
        jnz     L_391d
        mov     eax, dword ptr [esi + 0x1c]
        test    eax, eax
        jnz     L_3916
        test    byte ptr [esi + 0x6], 0x8
        jz      L_391d
L_3916:
        mov     ecx, esi
        call    FUN_0075c060
L_391d:
        or      byte ptr [esi + 0x4], 0x10
        mov     ecx, esi
        call    FUN_00753930
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x18
    }
}
