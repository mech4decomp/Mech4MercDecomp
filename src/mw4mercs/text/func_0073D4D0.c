/*
 * FUN_0073D4D0 (535 B) — __stdcall (RET 0xc, 3 stack params).
 *
 * In-.text data block at 0x73D430. FPU-heavy: computes a table index from
 * 0x8ab9d8/0x8ab9d4 and the params, looks up 0x8b7b18, and depending on
 * bounds writes a set of float globals (0x8ab9xx) and calls
 * FUN_00713CC0/FUN_0074C120/FUN_0073D470.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_8ab9d8;   /* DAT_008ab9d8 */
extern float g_8ab950;   /* DAT_008ab950 */
extern float g_8ab970;   /* DAT_008ab970 */
extern float g_8ab990;   /* DAT_008ab990 */
extern float g_8ab9b0;   /* DAT_008ab9b0 */
extern int   g_8ab9d4;   /* DAT_008ab9d4 */
extern float g_8ab954;   /* DAT_008ab954 */
extern float g_8ab974;   /* DAT_008ab974 */
extern float g_8ab994;   /* DAT_008ab994 */
extern float g_8ab9b4;   /* DAT_008ab9b4 */
extern int   g_8b7b18;   /* DAT_008b7b18 */
extern int   g_8aaf3c;   /* DAT_008aaf3c */
extern float g_8ab9cc;   /* DAT_008ab9cc */
extern float g_8ab96c;   /* DAT_008ab96c */
extern float g_8ab9ac;   /* DAT_008ab9ac */
extern float g_8ab98c;   /* DAT_008ab98c */
extern float g_76d064;   /* DAT_0076d064 */

extern void __cdecl FUN_00713CC0(void);
extern void __cdecl FUN_0074C120(void);
extern void __cdecl FUN_0073D470(void);

__declspec(naked) void __cdecl FUN_0073D4D0(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        fild    dword ptr [g_8ab9d8]
        mov     eax, dword ptr [g_8ab9d8]
        push    ebx
        add     eax, ecx
        fst     dword ptr [g_8ab950]
        mov     ecx, dword ptr [g_8ab9d4]
        fstp    dword ptr [g_8ab970]
        push    ebp
        mov     dword ptr [esp + 0x10], eax
        fild    dword ptr [esp + 0x10]
        xor     eax, eax
        xor     ebx, ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        fst     dword ptr [g_8ab990]
        mov     ax, word ptr [esi + 6]
        fstp    dword ptr [g_8ab9b0]
        mov     bx, word ptr [esi + 4]
        fild    dword ptr [g_8ab9d4]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        lea     edx, [ecx + edi]
        fst     dword ptr [g_8ab954]
        mov     dword ptr [esp + 0x18], edx
        fild    dword ptr [esp + 0x18]
        mov     ebp, eax
        shr     ebx, 0xa
        and     ebx, 7
        fst     dword ptr [g_8ab974]
        shr     ebp, 7
        fstp    dword ptr [g_8ab994]
        and     ebp, 1
        lea     ebx, [ebp + ebx*2]
        fstp    dword ptr [g_8ab9b4]
        shr     eax, 0xe
        lea     eax, [eax + ebx*4]
        mov     ebx, eax
        shl     ebx, 5
        sub     ebx, eax
        mov     eax, dword ptr [ebx*4 + g_8b7b18]
        test    eax, eax
        je      L73d6e0
        mov     eax, dword ptr [g_8aaf3c]
        lea     ebx, [eax + 0x12]
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x14], ebx
        jl      L73d5ca
        lea     ebp, [eax + 0x14c]
        cmp     edx, ebp
        jge     L73d5ca
        push    esi
        push    1
        call    FUN_00713CC0
        push    0x8ab950
        call    FUN_0074C120
        mov     edx, dword ptr [g_8ab994]
        mov     eax, dword ptr [g_8ab990]
        mov     ecx, dword ptr [g_8ab954]
        push    edx
        mov     edx, dword ptr [g_8ab950]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0073D470
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
L73d5ca:
        lea     ebp, [eax + 0x14c]
        cmp     ecx, ebp
        mov     dword ptr [esp + 0x18], ebp
        jge     L73d6e0
        cmp     edx, ebx
        jl      L73d6e0
        cmp     ecx, ebx
        jge     L73d662
        sub     eax, ecx
        add     eax, 0x12
        mov     dword ptr [esp + 0x18], eax
        fild    dword ptr [esp + 0x18]
        push    esi
        push    1
        fidiv   dword ptr [esp + 0x24]
        fst     dword ptr [g_8ab9cc]
        fstp    dword ptr [g_8ab96c]
        fild    dword ptr [esp + 0x1c]
        fst     dword ptr [g_8ab954]
        fstp    dword ptr [g_8ab9b4]
        call    FUN_00713CC0
        push    0x8ab950
        call    FUN_0074C120
        mov     eax, dword ptr [g_8ab994]
        mov     ecx, dword ptr [g_8ab990]
        mov     edx, dword ptr [g_8ab954]
        push    eax
        mov     eax, dword ptr [g_8ab950]
        push    ecx
        push    edx
        push    eax
        push    esi
        call    FUN_0073D470
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [g_8ab96c], 0
        mov     dword ptr [g_8ab9cc], 0
        pop     ebx
        ret     0xc
L73d662:
        fild    dword ptr [esp + 0x18]
        sub     ecx, eax
        lea     ecx, [ecx + edi - 0x14c]
        mov     dword ptr [esp + 0x18], ecx
        fst     dword ptr [g_8ab974]
        push    esi
        fstp    dword ptr [g_8ab994]
        push    1
        fild    dword ptr [esp + 0x20]
        fidiv   dword ptr [esp + 0x24]
        fsubr   dword ptr [g_76d064]
        fst     dword ptr [g_8ab9ac]
        fstp    dword ptr [g_8ab98c]
        call    FUN_00713CC0
        push    0x8ab950
        call    FUN_0074C120
        mov     edx, dword ptr [g_8ab994]
        mov     eax, dword ptr [g_8ab990]
        mov     ecx, dword ptr [g_8ab954]
        push    edx
        mov     edx, dword ptr [g_8ab950]
        push    eax
        push    ecx
        push    edx
        push    esi
        call    FUN_0073D470
        mov     dword ptr [g_8ab98c], 0x3f800000
        mov     dword ptr [g_8ab9ac], 0x3f800000
L73d6e0:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0xc
    }
}
