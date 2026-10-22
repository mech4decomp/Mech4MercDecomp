/*
 * FUN_00709f20 (354 B) — __stdcall RET 0x30 (12 params). gosScript state
 * setter: compares a set of incoming params against cached globals; if any
 * differ, stores the new values into a batch of globals (resolution/state
 * cache). Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_00858940;             /* DAT_00858940 */
extern int  g_00858944;             /* DAT_00858944 */
extern int  g_00858948;             /* DAT_00858948 */
extern int  g_0085a1b4;             /* DAT_0085a1b4 */
extern int  g_0085894c;             /* DAT_0085894c */
extern char g_00858955;             /* DAT_00858955 (byte) */
extern char g_00858956;             /* DAT_00858956 (byte) */
extern char g_00858957;             /* DAT_00858957 (byte) */
extern int  g_0085895c;             /* DAT_0085895c */
extern char g_0085a1de;             /* DAT_0085a1de (byte) */
extern int  g_00858950;             /* DAT_00858950 */
extern int  g_008aaec8;             /* DAT_008aaec8 */
extern char g_0085a0c5;             /* DAT_0085a0c5 (byte) */
extern int  g_0085a260;             /* DAT_0085a260 */
extern int  g_0085a264;             /* DAT_0085a264 */
extern int  g_0085a1ec;             /* DAT_0085a1ec */
extern int  g_0085a0d4;             /* DAT_0085a0d4 */
extern int  g_008aaed8;             /* DAT_008aaed8 */
extern int  g_008aaed4;             /* DAT_008aaed4 */
extern int  g_008aaedc;             /* DAT_008aaedc */
extern int  g_0085a1e8;             /* DAT_0085a1e8 */
extern int  g_0085a0d0;             /* DAT_0085a0d0 */
extern int  g_007b73dc;             /* DAT_007b73dc */
extern int  g_008aaef0;             /* DAT_008aaef0 */

__declspec(naked) void __stdcall FUN_00709f20(void)
{
    __asm {
        mov     eax, dword ptr [g_00858940]
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x20]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x3c]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        cmp     ecx, eax
        mov     eax, dword ptr [esp + 0x28]
        jnz     LFB9
        cmp     edi, dword ptr [g_00858944]
        jnz     LFB9
        cmp     ebp, dword ptr [g_00858948]
        jnz     LFB9
        cmp     ebp, dword ptr [g_0085a1b4]
        jnz     LFB9
        mov     ebx, dword ptr [esp + 0x20]
        cmp     ebx, dword ptr [g_0085894c]
        jnz     LFB9
        mov     bl, byte ptr [esp + 0x24]
        cmp     bl, byte ptr [g_00858955]
        jnz     LFB9
        cmp     al, byte ptr [g_00858956]
        jnz     LFB9
        mov     bl, byte ptr [esp + 0x2c]
        cmp     bl, byte ptr [g_00858957]
        jnz     LFB9
        mov     ebx, dword ptr [esp + 0x34]
        cmp     ebx, dword ptr [g_0085895c]
        jnz     LFB9
        mov     bl, byte ptr [esp + 0x3c]
        cmp     bl, byte ptr [g_0085a1de]
        jnz     LFB9
        cmp     esi, dword ptr [g_00858950]
        jnz     LFB9
        test    dl, dl
        jnz     LFB9
        mov     bl, byte ptr [esp + 0x38]
        test    bl, bl
        jz      LA07B
LFB9:
        mov     byte ptr [g_00858956], al
        and     eax, 0xff
        mov     dword ptr [g_008aaec8], eax
        mov     al, byte ptr [esp + 0x24]
        mov     byte ptr [g_00858955], al
        mov     byte ptr [g_0085a0c5], al
        mov     eax, dword ptr [esp + 0x34]
        mov     dword ptr [g_0085895c], eax
        mov     al, byte ptr [esp + 0x2c]
        mov     byte ptr [g_00858957], al
        mov     eax, dword ptr [esp + 0x20]
        and     edx, 0xff
        mov     dword ptr [g_0085894c], eax
        mov     eax, dword ptr [esp + 0x38]
        and     eax, 0xff
        mov     dword ptr [g_0085a260], edx
        xor     edx, edx
        cmp     esi, 0x1
        setz    dl
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a1ec], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     cl, byte ptr [esp + 0x3c]
        mov     dword ptr [g_0085a264], eax
        xor     eax, eax
        cmp     esi, 0x3
        setz    al
        mov     byte ptr [g_0085a1de], cl
        xor     ecx, ecx
        test    esi, esi
        setz    cl
        mov     dword ptr [g_00858948], ebp
        mov     dword ptr [g_00858944], edi
        mov     dword ptr [g_0085a1e8], edi
        mov     dword ptr [g_0085a0d0], edi
        mov     dword ptr [g_007b73dc], 0x0
        mov     dword ptr [g_008aaed8], edx
        mov     dword ptr [g_008aaed4], eax
        mov     dword ptr [g_008aaedc], ecx
        mov     dword ptr [g_008aaef0], 0x1
LA07B:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x30
    }
}
