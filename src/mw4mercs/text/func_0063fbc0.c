/*
 * FUN_0063FBC0 (573 B) — __thiscall object update: compares object IDs,
 * grows an internal 8-byte-element array, and appends entries from a
 * linked list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern int g_7f25c0;
extern int g_7f1f84;

extern void *__cdecl FUN_0041fd80(void);
extern void *__cdecl FUN_006411a0(int a, int b, int c);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_0041fcd0(void *a);
extern int __cdecl FUN_00415230(int a);
extern int __cdecl FUN_00417a40(void);
extern void *__cdecl FUN_004084d0(int a);
extern void __cdecl FUN_006411d0(int a, int b, void *c, void *d);
extern void __cdecl FUN_00641070(int a, int b);
extern int __cdecl FUN_0063efe0(int a);
extern void __cdecl FUN_00641090(void *a, void *b, int c);

__declspec(naked) void __stdcall FUN_0063FBC0(void *param)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        lea     ecx, [edi + 0xc]
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      loc_63fdf3
        mov     ebx, dword ptr [esp + 0x30]
        test    ebx, ebx
        jz      loc_63fc0c
        mov     eax, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [eax + 0x60]
        mov     ebp, eax
        test    ebp, ebp
        jz      loc_63fc0c
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x60]
        test    eax, eax
        jz      loc_63fc0c
        cmp     eax, ebp
        jnz     loc_63fc0c
        mov     byte ptr [edi + 0x134], 0x1
        jmp     loc_63fc13
loc_63fc0c:
        mov     byte ptr [edi + 0x134], 0x0
loc_63fc13:
        mov     ecx, dword ptr [edi + 0x5c]
        mov     eax, dword ptr [edi + 0x60]
        lea     esi, [edi + 0x5c]
        push    ecx
        push    eax
        push    eax
        call    FUN_006411a0
        lea     ebp, [edi + 0x54]
        add     esp, 0xc
        mov     ecx, ebp
        mov     dword ptr [esi + 0x4], eax
        call    FUN_0041fcb0
        lea     eax, [edi + 0x78]
        mov     ecx, 0xc
        mov     edx, 0xbf800000
loc_63fc41:
        mov     dword ptr [eax + 0x30], edx
        mov     dword ptr [eax], 0xffffffff
        add     eax, 0x4
        dec     ecx
        jnz     loc_63fc41
        test    ebx, ebx
        jz      loc_63fdf3
        push    ebx
        mov     ecx, ebp
        call    FUN_0041fcd0
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     al, byte ptr [ecx + 0x17]
        test    al, al
        jnz     loc_63fdf3
        mov     eax, dword ptr [g_7f25c0]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_63fdcb
        mov     edx, dword ptr [ebx + 0x3f8]
        lea     ecx, [ebx + 0x3f8]
        mov     dword ptr [esp + 0x28], edx
        call    FUN_00417a40
        mov     edi, dword ptr [esi + 0x8]
        mov     ebp, dword ptr [esi]
        mov     ebx, eax
        mov     eax, edi
        sub     eax, ebp
        sar     eax, 0x3
        cmp     eax, ebx
        jnc     loc_63fd59
        mov     eax, dword ptr [esi + 0x4]
        sub     eax, ebp
        sar     eax, 0x3
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], eax
        jz      loc_63fd2b
        test    ebx, ebx
        jz      loc_63fced
        lea     ecx, [ebx*8]
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x10], eax
        jmp     loc_63fcf5
loc_63fced:
        mov     dword ptr [esp + 0x10], 0x0
loc_63fcf5:
        mov     edx, dword ptr [esp + 0x30]
        mov     eax, dword ptr [esp + 0x10]
        push    edx
        push    eax
        mov     eax, dword ptr [esi + 0x4]
        push    eax
        push    ebp
        call    FUN_006411d0
        mov     eax, dword ptr [esi]
        mov     ebp, dword ptr [esp + 0x20]
        sub     edi, eax
        add     esp, 0x10
        sar     edi, 0x3
        push    edi
        push    eax
        lea     ecx, [esi + 0x8]
        mov     dword ptr [esp + 0x18], eax
        call    FUN_00641070
        mov     eax, dword ptr [esp + 0x14]
        jmp     loc_63fd49
loc_63fd2b:
        test    ebx, ebx
        jz      loc_63fd47
        lea     ecx, [ebx*8]
        push    ecx
        call    FUN_004084d0
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x18]
        add     esp, 0x4
        jmp     loc_63fd49
loc_63fd47:
        xor     ebp, ebp
loc_63fd49:
        lea     edx, [ebp + eax*8]
        lea     eax, [ebp + ebx*8]
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 0x4], edx
        mov     dword ptr [esi + 0x8], eax
loc_63fd59:
        mov     eax, dword ptr [esp + 0x28]
        test    eax, eax
        jz      loc_63fdc3
        mov     edi, dword ptr [eax]
        test    edi, edi
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esp + 0x28], ecx
        jz      loc_63fdc3
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax + 0x30]
        push    eax
        call    FUN_0063efe0
        mov     edx, dword ptr [esi + 0x8]
        xor     ecx, ecx
        mov     cl, byte ptr [edi + 0x170]
        add     esp, 0x4
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, edx
        jz      loc_63fdb2
        test    ecx, ecx
        jz      loc_63fdaa
        mov     dword ptr [ecx], eax
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [ecx + 0x4], edx
loc_63fdaa:
        add     ecx, 0x8
        mov     dword ptr [esi + 0x4], ecx
        jmp     loc_63fd59
loc_63fdb2:
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_00641090
        jmp     loc_63fd59
loc_63fdc3:
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x30]
loc_63fdcb:
        mov     eax, dword ptr [g_7f1f84]
        mov     ecx, dword ptr [ebx + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     loc_63fdea
        mov     byte ptr [edi + 0x50], al
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
loc_63fdea:
        mov     cl, byte ptr [edi + 0x135]
        mov     byte ptr [edi + 0x50], cl
loc_63fdf3:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret     4
    }
}
