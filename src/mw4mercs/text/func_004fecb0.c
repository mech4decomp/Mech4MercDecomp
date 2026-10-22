/*
 * FUN_004FECB0 (249 B) -- MLR/Adept OBB visibility/transform helper.
 * Walks a linked list of objects, transforms matrices via FUN_00417d80 and
 * FUN_004c8510, and clears a flag in [param4+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_004c8510(void);

extern char  g_7dc955;    /* 0x007dc955 */
extern float g_76c5b0;    /* 0x0076c5b0 */

__declspec(naked) void __cdecl FUN_004fecb0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [ebx + 0x14]
        mov     ebp, dword ptr [edi + 0x128]
        test    ebp, ebp
        jz      L_4fecce
        mov     al, byte ptr [g_7dc955]
        test    al, al
        jz      L_4fecd4
L_4fecce:
        mov     ebp, dword ptr [edi + 0x124]
L_4fecd4:
        test    ebp, ebp
        jz      L_4fed1c
        fld     dword ptr [ebp + 0x4c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L_4fed2c
        mov     eax, dword ptr [edi + 0xd8]
        add     eax, 0x80
        lea     esi, [ebp + 0x50]
        push    eax
        add     ebp, 0x10
        push    ebp
        mov     ecx, esi
        call    FUN_00417d80
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    0x3f
        push    ecx
        push    edx
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        add     esp, 0x14
L_4fed1c:
        mov     eax, dword ptr [ebx + 0x18]
        pop     edi
        pop     esi
        and     eax, 0xffffc7ff
        pop     ebp
        mov     dword ptr [ebx + 0x18], eax
        pop     ebx
        ret
L_4fed2c:
        mov     ebx, dword ptr [ebp + 0x90]
        test    ebx, ebx
        jz      L_4fed94
L_4fed32:
        mov     ecx, dword ptr [ebx]
        test    ecx, ecx
        mov     ebx, dword ptr [ebx + 0x4]
        jz      L_4fed94
        fld     dword ptr [ecx + 0x4c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-4) */
        __emit 0xE3
        mov     eax, dword ptr [ecx + 0x98]
        cmp     eax, dword ptr [ebp + 0x98]
        __emit 0x75   /* __emit: MSVC6 miscomputes backward jnz rel8 (off-by-4) */
        __emit 0xD5
        mov     edx, dword ptr [edi + 0xd8]
        lea     esi, [ecx + 0x50]
        add     edx, 0x80
        add     ecx, 0x10
        push    edx
        push    ecx
        mov     ecx, esi
        call    FUN_00417d80
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    0x3f
        push    eax
        push    ecx
        push    0x7dc940
        push    esi
        call    FUN_004c8510
        add     esp, 0x14
        __emit 0xEB   /* __emit: MSVC6 miscomputes backward jmp rel8 (off-by-4) */
        __emit 0x9E
L_4fed94:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [eax + 0x18]
        pop     edi
        pop     esi
        and     ecx, 0xffffc7ff
        pop     ebp
        mov     dword ptr [eax + 0x18], ecx
        pop     ebx
        ret
    }
}
