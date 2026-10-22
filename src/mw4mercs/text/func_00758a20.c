/*
 * FUN_00758A20 (232 B) — __thiscall (ECX = this) constructor, RET 0x10.
 * Initializes a node object: copies a name via _mbscpy, allocates a child
 * via FUN_004084C0/FUN_0075D820, links into the global list DAT_008bc00c.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8816d0;            /* DAT_008816d0 */
extern int g_8492fc;            /* DAT_008492fc */
extern int g_8bc00c;            /* DAT_008bc00c */
extern int (__cdecl *g_mbscpy)(void *, const void *); /* IAT 0x76b410 */

extern void __cdecl FUN_004084C0(void);
extern void __cdecl FUN_0075D820(void);
extern void __cdecl FUN_00759150(void);
extern void __cdecl FUN_00758CA0(void);
extern void __cdecl FUN_00758CD0(void);

__declspec(naked) void * __fastcall FUN_00758A20(void *this, void *param_1, int param_2, int param_3, char param_4)
{
    __asm {
        mov     eax, dword ptr [g_8816d0]
        push    ebx
        mov     bl, byte ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        push    ecx
        lea     edx, [esi + 0x4c]
        push    edx
        mov     dword ptr [esi], 0
        mov     dword ptr [esi + 0x4], ebp
        mov     dword ptr [esi + 0x8], edi
        mov     dword ptr [esi + 0x2050], 0x3f800000
        mov     byte ptr [esi + 0x2054], 0
        mov     dword ptr [esi + 0x2058], eax
        mov     byte ptr [esi + 0x204d], bl
        call    dword ptr [g_mbscpy]
        xor     ecx, ecx
        add     esp, 0x8
        cmp     edi, ecx
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esi + 0x18], ecx
        jz      L_8ace
        cmp     ebp, ecx
        jz      L_8ace
        mov     eax, dword ptr [g_8492fc]
        push    eax
        push    0x14
        call    FUN_004084C0
        add     esp, 0x8
        test    eax, eax
        jz      L_8aa1
        push    ebp
        push    edi
        mov     ecx, eax
        call    FUN_0075D820
        jmp     L_8aa3
L_8aa1:
        xor     eax, eax
L_8aa3:
        mov     ecx, esi
        mov     dword ptr [esi + 0x1c], eax
        call    FUN_00759150
        test    bl, bl
        jz      L_8ab5
        push    -0x1
        jmp     L_8abc
L_8ab5:
        mov     ecx, dword ptr [g_8816d0]
        push    ecx
L_8abc:
        mov     ecx, esi
        call    FUN_00758CA0
        mov     ecx, esi
        call    FUN_00758CD0
        xor     ecx, ecx
        jmp     L_8ae7
L_8ace:
        test    bl, bl
        jz      L_8adb
        mov     dword ptr [esi + 0x14], 0xffffffff
        jmp     L_8ae4
L_8adb:
        mov     edx, dword ptr [g_8816d0]
        mov     dword ptr [esi + 0x14], edx
L_8ae4:
        mov     dword ptr [esi + 0x1c], ecx
L_8ae7:
        mov     eax, dword ptr [g_8bc00c]
        cmp     eax, ecx
        mov     dword ptr [esi + 0x24], eax
        jz      L_8af6
        mov     dword ptr [eax + 0x28], esi
L_8af6:
        pop     edi
        mov     dword ptr [esi + 0x28], ecx
        mov     dword ptr [g_8bc00c], esi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    }
}
